#!/bin/bash

g++ 441.cpp -o 441 -Wall -g
./441 < sample.in | tee sample.out

