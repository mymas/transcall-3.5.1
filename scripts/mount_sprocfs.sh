#!/bin/bash
#
# usage: mount_sprocfs.sh mount_dir domid
#

PROC_DIR=$1/proc
DOMID=$2

../sprocfs/shadow_procfs ${PROC_DIR} ${DOMID}
