#!/bin/bash
#git_ignore.sh

find . \( -type f -o -type d \) | wc -l | tr -d ' '
