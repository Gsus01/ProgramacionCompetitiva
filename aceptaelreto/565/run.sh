#!/bin/bash

g++ 565.cpp -o 565 -Wall -g
./565 < sample.in | tee sample.out

