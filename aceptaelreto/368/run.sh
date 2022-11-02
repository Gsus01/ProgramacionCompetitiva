#!/bin/bash

g++ 368.cpp -o 368 -Wall -g
./368 < sample.in | tee sample.out

