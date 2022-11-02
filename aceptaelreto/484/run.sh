#!/bin/bash

g++ 484.cpp -o 484 -Wall -g
./484 < sample.in | tee sample.out

