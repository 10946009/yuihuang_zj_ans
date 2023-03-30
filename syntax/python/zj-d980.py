#!/usr/bin/env python 

import sys

lines = sys.stdin.readlines()

T = int(lines[0])

for Case in range(1, T+1):
    print(f"Case {Case}: ", end="")
    a = list(map(int, lines[Case].split()))
    a.sort()
    if a[0] <= 0:
        print("Invalid")
    elif a[0] == a[2]:
        print("Equilateral")
    elif a[0] == a[1] or a[1] == a[2]:
        print("Isosceles")
    else:
        if a[0] + a[1] > a[2]:
            print("Scalene")
        else:
            print("Invalid")
