#!/usr/bin/env python 

T = int(input())
for TC in range(1, T+1):
    a = int(input())
    b = int(input())
    
    if a % 2 == 1:
        start = a
    else:
        start = a+1
    
    ans = 0
    for i in range(start, b+1, 2):
        ans += i
    print(f"Case {TC}: {ans}")
