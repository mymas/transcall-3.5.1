#!/bin/sh

if [ `id | cut -d= -f2 | cut -d\( -f1` -ne 0 ]; then 
   echo "$0 need root privileges"
   exit 1
fi

if [ ! -f "${1}" -o -z "${2}" ]; then
	echo "input virtual disk image and domainU's ID"
	exit 1;
#elif [ ! "`xm list | awk '{printf("%s\n", $2)}' | grep ${2}`" ]; then
#	echo "not exist domainU"
#	exit 1;
fi;

MOUNT_DIR="/tmp/vm${2}"
PROC_DIR="/tmp/vm${2}/proc"

mkdir ${MOUNT_DIR} 

./mount_vdi "${1}" "${MOUNT_DIR}"
mount --bind /proc ${PROC_DIR}

#ls ${PROC_DIR}
(cd ../transcall;
./transcall "${MOUNT_DIR}" ${2} "bash")

umount "${PROC_DIR}" 

./umount_vdi "${MOUNT_DIR}"
if [ $? -ne 0 ]; then
    exit
fi

rm -rf ${MOUNT_DIR}
