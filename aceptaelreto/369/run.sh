#!/bin/bash

g++ 369.cpp -o 369 -Wall -g
./369 < sample.in | tee sample.out

