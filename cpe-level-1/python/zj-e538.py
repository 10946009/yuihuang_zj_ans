#!/usr/bin/env python 

while True:
    n, d, r = map(int, input().split())
    if n == 0 and  d == 0 and r == 0:
        break
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    A.sort()
    B.sort(reverse=True)
    overtime = 0
    for i in range(n):
        if A[i] + B[i] > d:
            overtime += (A[i] + B[i] - d) * r

    print(overtime)
