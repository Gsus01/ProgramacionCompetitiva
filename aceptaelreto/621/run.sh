#!/bin/bash

g++ 621.cpp -o 621 -Wall -g
./621 < sample.in | tee sample.out

