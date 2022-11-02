#!/bin/bash

g++ 402.cpp -o 402 -Wall -g
./402 < sample.in | tee sample.out

