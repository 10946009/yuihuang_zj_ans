#!/usr/bin/env python 

T = int(input())
for Case in range(T):
    D, I = map(int, input().split())
    idx = 1
    remainder = I
    for i in range(D-1):
        if remainder % 2 == 1:
            # go left
            idx = 2 * idx
            remainder = (remainder + 1) // 2
        else:
            # go right
            idx = 2 * idx + 1
            remainder = remainder // 2
    print(idx)
