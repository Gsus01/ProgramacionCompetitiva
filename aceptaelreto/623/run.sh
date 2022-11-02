#!/bin/bash

g++ 623.cpp -o 623 -Wall -g
./623 < sample.in | tee sample.out

