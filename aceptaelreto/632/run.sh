#!/bin/bash

g++ 632.cpp -o 632 -Wall -g
./632 < sample.in | tee sample.out

