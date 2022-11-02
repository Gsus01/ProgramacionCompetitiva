#!/bin/bash

g++ 628.cpp -o 628 -Wall -g
./628 < sample.in | tee sample.out

