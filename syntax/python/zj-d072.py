#!/usr/bin/env python 

n = int(input())
for TC in range(1, n+1):
    print(f"Case {TC}: ", end="")
    y = int(input())
    if ((y % 4 == 0) and (y % 100 != 0)) or (y % 400 == 0):
        print("a leap year")
    else:
        print("a normal year")
