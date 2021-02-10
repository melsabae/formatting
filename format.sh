#!/usr/bin/env bash

function format {
    which $1 2>&1 > /dev/null && $@
}


format indent -o $1 $1
format clang-format --style=file -i $1
format astyle --options=astylerc --suffix=none $1 > /dev/null
format clang-format --style=file -i $1

