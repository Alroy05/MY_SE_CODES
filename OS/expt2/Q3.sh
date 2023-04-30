#! /usr/bin/bash

echo enter number
read n

if [[ $n != [0-9] ]];then
   echo Number not in range
else
   echo Number in range
fi
