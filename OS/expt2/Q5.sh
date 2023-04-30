#! /usr/bin/bash

echo "Todays day is $(date +%A)"
echo "-----------------------"

# ps3="Select a day in 1-7"
select i in mon tue wed thur fri sat sun exit
do 
  case $i in 
  mon) echo "Monday";;
  tue) echo "Tuesday";;
  wed) echo "Wednesday";;
  thur) echo "Thursday";;
  fri) echo "Friday";;
  sat) echo "Satday";;
  sun) echo "Sunday";;
  exit) exit;;
  esac
done

