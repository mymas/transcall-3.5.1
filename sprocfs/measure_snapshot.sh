#!/bin/sh
read -p "id:" id
for i in 1 2 3 4 5 6 7 8 9 10
do
	echo 2 > /proc/sys/vm/drop_caches
	echo 1 > /proc/sys/vm/drop_caches
	./shadow_procfs /tmp/proc ${id}
	umount /tmp/proc
done
