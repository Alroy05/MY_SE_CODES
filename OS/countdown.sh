#!/bin/bash

echo "Enter a number to countdown from"
read n

while test [$n==0]
do
    echo $n
    n='$n-1'
done



