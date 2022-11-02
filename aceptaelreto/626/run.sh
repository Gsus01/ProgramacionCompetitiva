#!/bin/bash

g++ 626.cpp -o 626 -Wall -g
./626 < sample.in | tee sample.out

