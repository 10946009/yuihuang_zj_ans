#!/usr/bin/env python 

def GCD(x, y):
    while True:
        try:
            x %= y
            y %= x
        except:
            break
    return x + y

table = [[0 for i in range(501)] for j in range(501)]
for i in range(1, 501):
    for j in range(i+1, 501):
        table[i][j] = GCD(i, j)
        
while True:
    N = int(input())
    if N == 0:
        break
    
    G = 0
    for i in range(1, N):
        for j in range(i+1, N+1):
            G += table[i][j]
    print(G)
