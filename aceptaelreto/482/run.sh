#!/bin/bash

g++ 482.cpp -o 482 -Wall -g
./482 < sample.in | tee sample.out
