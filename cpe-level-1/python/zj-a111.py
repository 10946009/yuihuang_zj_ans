#!/usr/bin/env python 

while True:
    try:
        n = int(input())
        if n == 0:
            break
        ans = 0
        for i in range(1, n+1):
            ans += i ** 2
        print(ans)
    except:
        break
