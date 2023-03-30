#!/usr/bin/env python 

import sys
lines = sys.stdin.readlines()
t = int(lines[0])
for i in range(1, t+1):
    y = int(lines[i])
    if ((y % 4 == 0) and (y % 100 != 0)) or (y % 400 == 0):
        print("a leap year")
    else:
        print("a normal year")
