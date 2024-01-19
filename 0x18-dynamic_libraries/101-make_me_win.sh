#!/bin/bash
wget -p /tmp https://github.com/staph123292/alx-low_level_programming/raw/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
