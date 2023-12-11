#!/bin/bash
wget -P .. https://raw.github.com/willykar/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
