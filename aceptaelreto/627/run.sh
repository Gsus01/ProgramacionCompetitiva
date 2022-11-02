#!/bin/bash

g++ 627.cpp -o 627 -Wall -g
./627 < sample.in | tee sample.out

