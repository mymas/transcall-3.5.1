#!/bin/bash
#
# usage: mount_aufs.sh mount_dir
#

MOUNT_DIR=$1

mkdir ${MOUNT_DIR}w
mount -t aufs -o br:${MOUNT_DIR}w:${MOUNT_DIR}r=ro none ${MOUNT_DIR}
