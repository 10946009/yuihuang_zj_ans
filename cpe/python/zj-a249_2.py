#!/usr/bin/env python 

import sys
lines = sys.stdin.readlines()
T = int(lines[0].strip())
for i in range(1, T+1):
    D, I = map(int, lines[i].strip().split()) 
    print(int("1" + f"{I-1:0{D-1}b}"[::-1], 2))
