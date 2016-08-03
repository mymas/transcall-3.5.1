#!/bin/bash
#
# usage: mount_csfs.sh mount_dir domid
#

MOUNT_DIR=$1
DOMID=$2

../csfs/csfs --perms=a-w ${MOUNT_DIR}c ${MOUNT_DIR}r ${DOMID}
