#!/usr/bin/env python 

import sys

def Find(x):
    if (pa[x] == x):
        return x
    else:
        pa[x] = Find(pa[x])
        return pa[x]
    
def Union(x, y):
    g1 = Find(x)
    g2 = Find(y)
    if (g1 == g2):
        return False
    else:
        pa[g2] = g1
        return True
    
lines = sys.stdin.readlines()
idx = -1
Case = 0
while True:
    try:
        idx += 1
        n, m = map(int, lines[idx].split())
        if n == 0 and m == 0:
            break
        Case += 1
        pa = []
        for i in range(n+1):
            pa.append(i)
            
        ans = n
        for i in range(m):
            idx += 1
            x, y = map(int, lines[idx].split())
            if (Union(x, y)):
                ans -= 1
        print(f"Case {Case}: {ans}")
    except:
        break
 
