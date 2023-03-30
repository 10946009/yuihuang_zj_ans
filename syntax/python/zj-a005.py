#!/usr/bin/env python 

t = int(input())
for _ in range(t):
    a0, a1, a2, a3 = map(int, input().split())
    if a3-a2 == a2-a1:
        a4 = a3 + a3 - a2
    else:
        a4 = a3 * (a3 // a2)
    
    print(a0, a1, a2, a3, a4)

