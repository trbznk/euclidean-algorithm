#!/bin/bash

set -x

clang -Wall -Wextra -o main main.c 
./main
