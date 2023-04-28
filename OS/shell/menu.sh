#!/bin/bash

echo "Select command to be executed:"

echo "1. ls"

echo "2. pwd"

echo "3. ls -l"

echo "4. ps -fe"

echo "5. EXIT"

echo "Enter your choice from 1 to 5"

while :
do

read choice

case $choice in

    1) echo "selected option 1"
       ls;;

    2) echo "selected option 2"
       pwd;;

    3) echo "selected option 3"
       ls -l;;

    4) echo "selected option 4"
       ps -fe;;

    5) echo "EXITING"
       exit ;;
    
    *) echo "invalid option selected" ;;

esac
    echo "Enter your choice from 1 to 5"
done

