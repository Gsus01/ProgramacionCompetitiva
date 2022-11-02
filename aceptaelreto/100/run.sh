#!/bin/bash

g++ 100.cpp -o 100 -Wall -g
./100 < sample.in | tee sample.out

