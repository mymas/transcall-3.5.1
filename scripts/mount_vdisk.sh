#!/bin/bash
#
# usage: mount_vdisk.sh disk_image mount_dir
#

USE_CSFS=1

CNT=0

if [ ! -f "${1}" -o ! -d "${2}" ]; then
	echo "usage: mount_vdi disk_image mount_dir"
	exit 1
fi  

MOUNT_DIR=$2

DEVICE=`losetup -a | grep ${1} | cut -d':' -f1`

if [ -z "${DEVICE}" ]; then
	DEVICE=`losetup -f`
	losetup -r ${DEVICE} ${1}
fi  

fdisk -lu ${DEVICE} > tmp 2> /dev/null 
kpartx -a ${DEVICE}

while read LINE
do
	if [ "`echo ${LINE} | grep Boot`" ]; then
		echo "        ${LINE}"
		CNT=`expr ${CNT} + 1`
	fi  
	if [ ${CNT} -ne 0 ]; then
		LOOP[${CNT}]=`echo "${LINE}" | grep ${DEVICE}`
		if [ "${LOOP[${CNT}]}" ]; then
			echo "${CNT}: ${LOOP[${CNT}]}"
			CNT=`expr ${CNT} + 1`
		fi  
	fi  
done < tmp 
rm -f tmp 

if [ ${CNT} -eq 0 ]; then
    mkdir ${MOUNT_DIR}r

    if [ ${USE_CSFS} -eq 1 ]; then
        mkdir ${MOUNT_DIR}c
        mount -r ${DEVICE} ${MOUNT_DIR}c
    else
        mount -r ${DEVICE} ${MOUNT_DIR}r
    fi

    ABSPATH=$(cd $(dirname "$2") && pwd)/$(basename "$2")
    echo "${DEVICE}     NULL    ${ABSPATH} 	${MOUNT_DIR}c" >> /tmp/mount.dat
    exit 0
fi  

echo "Input mount number"
read NUMBER

if [ ${NUMBER} -ge ${CNT} -o ${NUMBER} -eq 0 ]; then
	echo "can't find number ${NUMBER}"
	exit 1
fi  

MOUNT_DEV=/dev/mapper/`echo "${LOOP[${NUMBER}]}" | cut -d' ' -f1 | cut -d'/' -f3`
LVM_DEV=`echo "${LOOP[${NUMBER}]}" | grep LVM`
LVM_CHK=`fdisk -lu ${DEVICE} | grep LVM | cut -d' ' -f1 | cut -d'/' -f3`

if [ "${LVM_DEV}" ]; then
	VG_NAME=`pvdisplay ${MOUNT_DEV} | grep "VG Name" | awk '{printf("%s",$3)}'`
	pvscan > /dev/null 2>&1
	vgscan > /dev/null 2>&1
	MOUNT_DEV=`lvscan | grep ${VG_NAME} | head -n 1 | cut -d\' -f2`
	vgchange -ay ${VG_NAME} > /dev/null 2>&1
elif [ "${LVM_CHK}" ]; then
	VG_NAME=`pvdisplay /dev/mapper/${LVM_CHK} | grep "VG Name" | awk '{printf("%s",$3)}'`
else
	VG_NAME=NULL    
fi  

mkdir ${MOUNT_DIR}r

if [ ${USE_CSFS} -eq 1 ]; then
    mkdir ${MOUNT_DIR}c
    mount -r ${MOUNT_DEV} ${MOUNT_DIR}c
else
    mount -r ${MOUNT_DEV} ${MOUNT_DIR}r
fi

ABSPATH=$(cd $(dirname "$2") && pwd)/$(basename "$2")
echo "${DEVICE}   ${VG_NAME}	${ABSPATH}	 ${MOUNT_DIR}c" >> /tmp/mount.dat
