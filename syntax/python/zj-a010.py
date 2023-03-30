#!/usr/bin/env python 

import sys

lines = sys.stdin.readlines()
for line in lines:
    n = int(line)
    ans = ""
    first = True
    for b in range(2, n+1):
        p = 0
        while n % b == 0:
            p += 1
            n //= b
        if p:
            if first:
                first = False
            else:
                ans += " * "
                
            if p > 1:
                ans += f"{b}^{p}"
            else:
                ans += f"{b}"
                
        if n == 1:
            break;
    print(ans)
            
