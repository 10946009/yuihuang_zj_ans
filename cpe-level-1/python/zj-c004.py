#!/usr/bin/env python 

T = int(input())
for t in range(T):
    s, d = map(int, input().split())
    if (s+d)%2 != 0 or s < d:
        print('impossible')
    else:
        print((s + d) // 2, (s - d) // 2)
