#!/bin/bash

echo "Enter file name:"

read filename

if test -x "$filename";
then
echo "file is executable"
else
echo "file is not executable"
chmod +x $filename
echo "file is converted to be executable"
fi
