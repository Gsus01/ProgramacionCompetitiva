#!/bin/bash

g++ 480.cpp -o 480 -Wall -g
./480 < sample.in | tee sample.out

