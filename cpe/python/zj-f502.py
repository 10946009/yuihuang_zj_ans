#!/usr/bin/env python 

T = int(input().strip())
for Case in range(T):
    n, k = map(int, input().strip().split())
    A = list(map(int, input().strip().split()))
    A = [a%k for a in A]
    #print(A)
    re = [0 for _ in range(k)]
    nxt = [0 for _ in range(k)]
    re[0] = 1
    flag = False
    for i in range(n):
        for j in range(k):
            if re[j] == 0:
                continue
            nxt[(j+A[i]+k)%k] = 1
            nxt[(j-A[i]+k)%k] = 1
        
        re = nxt
        nxt = [0 for _ in range(k)]
        
    if re[0] == 1:
        print("Divisible")
    else:
        print("Not divisible")
