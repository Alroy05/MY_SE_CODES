#!/bin/bash

echo "enter your username"
read input
echo "entered username is: $input"
who > user
if grep $input user
then
	 echo "$input have already logged in"
else 
	echo "universe is not logged in"
fi
