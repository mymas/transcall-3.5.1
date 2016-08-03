#!/bin/sh
read -p "id:" id
for i in 1 2 3 4 5 6 7 8 9 10
do
	./shadow_procfs /tmp/proc ${id}
	umount /tmp/proc
done
