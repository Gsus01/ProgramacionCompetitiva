#!/bin/bash

g++ 373.cpp -o 373 -Wall -g
./373 < sample.in | tee sample.out

