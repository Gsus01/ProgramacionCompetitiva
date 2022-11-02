#!/bin/bash

g++ 622.cpp -o 622 -Wall -g
./622 < sample.in | tee sample.out

