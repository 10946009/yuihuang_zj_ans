#!/usr/bin/env python 

n_tests = int(input().strip())

for iter1 in range(n_tests):
    _ = input()
    N = int(input().strip())
    work = []
    for iter2 in range(N):
        d, p = map(int, input().strip().split())
        work.append([d, p, str(iter2 + 1)])
        
    for i in range(N-1):
        for j in range(N-1-i):
            if work[j+1][1] * work[j][0] > work[j][1] * work[j+1][0]:
                work[j], work[j+1] = work[j+1], work[j]
                
    res = ""
    for i in range(N):
        res += work[i][2] + " "
    print(res[:-1])
