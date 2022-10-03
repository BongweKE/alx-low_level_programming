#!/bin/bash
while read -r line; do
    grep --exclude={main.h,sources.txt} -ls $line ~/Dev/alx-low_level_programming/0x18-dynamic_libraries/*
    echo __ $line ____
done
