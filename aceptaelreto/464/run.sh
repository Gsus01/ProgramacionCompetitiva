#!/bin/bash

g++ 464.cpp -o 464 -Wall -g
./464 < sample.in | tee sample.out

