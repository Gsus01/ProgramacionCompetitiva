#!/bin/bash

g++ 564.cpp -o 564 -Wall -g
./564 < sample.in | tee sample.out

