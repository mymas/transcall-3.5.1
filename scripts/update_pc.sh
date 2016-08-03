#!/bin/sh

make MyIntrospect.ah
rm $1
touch *.o */*.o */*/*.o */*/*/*.o
