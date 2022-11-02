#!/bin/bash

g++ 372.cpp -o 372 -Wall -g
./372 < sample.in | tee sample.out

