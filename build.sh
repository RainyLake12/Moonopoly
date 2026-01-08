#!/bin/bash

cp to_move/* bin
mkdir -p build && cd build
cmake .. $@ && make