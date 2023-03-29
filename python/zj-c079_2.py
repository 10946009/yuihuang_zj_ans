#!/usr/bin/env python 

while True:
    try:
         n, k = map(int, input().split())
         print(n + n // k + (n // k + n % k) // k)
    except:
        break
