#!/usr/bin/env python 

from functools import cmp_to_key

while True:
    try:
        N = int(input().strip())
        W = input().strip().split()
        F = input().strip().split()
 
        obj = [[int(w), int(f)] for w, f in zip(W, F)]
     
        obj.sort(key=cmp_to_key(lambda a, b: a[0]*b[1] - b[0]*a[1]))
        
        energy = 0
        cum_w = 0
        for i in range(N-1):
            cum_w += obj[i][0]
            energy += cum_w * obj[i+1][1]
     
        print(energy)
    except:
        break
