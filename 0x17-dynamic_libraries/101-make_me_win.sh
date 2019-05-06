#!/bin/bash
wget https://github.com/ethanpasta/holbertonschool-low_level_programming/blob/master/0x17-dynamic_libraries/inject.so
export LD_PRELOAD=$PWD/inject.so
