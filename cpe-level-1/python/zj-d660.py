#!/usr/bin/env python 

T = int(input())
for TC in range(1, T+1):
    N = int(input())
    h = list(map(int, input().split()))
    
    cur = -1
    low = 0
    high = 0
    for i in range(N):
        if cur >= 0:
            if h[i] > cur:
                high += 1
            elif h[i] < cur:
                low += 1
        cur = h[i]
        
    print(f"Case {TC}: {high} {low}")
