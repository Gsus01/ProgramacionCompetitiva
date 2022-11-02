#!/bin/bash

g++ 481.cpp -o 481 -Wall -g
./481 < sample.in | tee sample.out

