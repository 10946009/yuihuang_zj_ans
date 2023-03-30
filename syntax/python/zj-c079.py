#!/usr/bin/env python 

while True:
    try:
        n, k = map(int, input().split())
        ans = n + n // k
        n = n // k + n % k;
        while n >= k:
            n -= k
            n += 1
            ans += 1
        print(ans)
    except:
        break
