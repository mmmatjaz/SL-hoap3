#!/bin/sh

PREFIX="hoap3_"
printf "\nprefix: %s\n" $PREFIX
headers=`find -name '*.h'`

for i in $headers
do
   il=${i#.\/}
   #echo $il
   link=${il#$PREFIX}
   echo $il " to " $link
   ln -s $i $link
done

