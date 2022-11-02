#!/bin/bash

g++ 298.cpp -o 298 -Wall -g
./298 < sample.in | tee sample.out

