#!/bin/bash

g++ 374.cpp -o 374 -Wall -g
./374 < sample.in | tee sample.out

