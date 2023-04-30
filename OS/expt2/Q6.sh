#! /usr/bin/bash

path="/home/alroy/Desktop/expt2"

echo "Number of directories in $path: "$(find $path/* -type d | wc -l)

echo "Number of files in $path: "$(find $path/* -type f | wc -l)
