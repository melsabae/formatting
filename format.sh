#!/usr/bin/env bash


indent -o $1 $1
clang-format --style=file -i $1
astyle --options=astyle.conf --suffix=none $1 > /dev/null
clang-format --style=file -i $1
