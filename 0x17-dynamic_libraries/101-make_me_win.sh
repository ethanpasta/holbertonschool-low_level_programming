#!/bin/bash
wget https://github.com/ethanpasta/holbertonschool-low_level_programming/raw/master/tmp/inject.so
export LD_PRELOAD=$PWD/inject.so
