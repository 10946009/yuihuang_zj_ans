#!/usr/bin/env python 

while True:
    try:
        N  = int(input())
        ans = N
        while N >= 3:
            ans += N // 3
            N = N // 3 + N % 3
        ans += (N == 2)
        print(ans)
    except:
        break
