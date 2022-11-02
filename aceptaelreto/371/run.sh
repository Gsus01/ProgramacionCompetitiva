#!/bin/bash

g++ 371.cpp -o 371 -Wall -g
./371 < sample.in | tee sample.out

