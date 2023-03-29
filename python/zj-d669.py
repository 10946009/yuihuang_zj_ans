#!/usr/bin/env python 

import sys

lines = sys.stdin.readlines()

for line in lines[:-1]:
    h1, m1, h2, m2 = map(int, line.split())
    ans = h2 * 60 + m2 - h1 * 60 - m1
    if ans < 0:
        ans += 1440
    print(ans)
