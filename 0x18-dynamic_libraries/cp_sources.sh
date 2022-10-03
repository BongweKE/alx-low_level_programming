#!/bin/bash
while read -r line; do
    grep --exclude={\*main\*,temp,0x18-dynamic_libraries/*} -ls $line ~/Dev/*/*/* | head -1 | xargs -I '{}' cp '{}' ./
done
