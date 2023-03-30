#!/usr/bin/env python 

# NA (score:95%)
# Segmentation fault (core dumped)
import sys
sys.setrecursionlimit(1000000)

def dfs(x):
    global h
    if len(g[x]) == 0:
        h[x] = 0
    else:
        mx = 0
        for i in g[x]:
            dfs(i)
            mx = max(mx, h[i] + 1)
        h[x] = mx
        
for line in sys.stdin:
    n = int(line.strip())
    g = [[] for _ in range(n)]
    pa = [-1 for _ in range(n)]
    for i in range(n):
        tmp = list(map(int, sys.stdin.readline().strip().split()))
        if tmp[0] > 0:
            g[i] = [k-1 for k in tmp[1:]]
            for j in g[i]:
                pa[j] = i
    for i in range(n):
        if pa[i] == -1:
            root = i
            break
        
    h = [0 for _ in range(n)]
    dfs(root)
    ans = 0
    for i in range(n):
        ans += h[i]
        
    print(root + 1)
    print(ans)
