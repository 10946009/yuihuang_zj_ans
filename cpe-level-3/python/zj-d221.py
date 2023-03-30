#!/usr/bin/env python 

while True:
    try:
        n = int(input())
        if n == 0:
            break
        lst = list(map(int, input().split()))
        lst.sort()
        ans = 0
        total = lst[0]
        for i in range(n-1):
            num = lst.pop(0) + lst.pop(0)
            ans += num
            lst.append(num)
            lst.sort()
        print(ans)
    except:
        break
