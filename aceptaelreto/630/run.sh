#!/bin/bash

g++ 630.cpp -o 630 -Wall -g
./630 < sample.in | tee sample.out

