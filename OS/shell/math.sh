#!/bin/bash

echo "enter 4 integers"
read a b c d

add=$((a+b+c+d))
echo "sum is: $add"


product=$((a*b*c*d))
echo "product is: $product"

avg=$((add/4))
echo "average is: $avg"
