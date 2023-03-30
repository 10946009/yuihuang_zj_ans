#!/usr/bin/env python 

while True:
    n = int(input())
    if n == 0:
        break
    a = []
    Sum = 0
    for i in range(n):
        a.append(int(round(float(input()) * 100)))
        Sum += a[i]
        
    a.sort()
    avg = Sum // n
    remain = Sum - avg * n
    ans = 0.0
    for i in range(n-1, n - remain - 1, -1):
        ans += abs(a[i] - avg - 1)
        
    for i in range(n - remain - 1, -1, -1):
        ans += abs(a[i] - avg)
        
    print(f"${ans / 200.0:.2f}")
