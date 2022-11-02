#!/bin/bash

g++ 370.cpp -o 370 -Wall -g
./370 < sample.in | tee sample.out

