#!/bin/bash

g++ 483.cpp -o 483 -Wall -g
./483 < sample.in | tee sample.out

