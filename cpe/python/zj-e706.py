#!/usr/bin/env python 

Case = 1
while True:
    try:
        n = int(input())
        ans = 0
        for _ in range(n):
            dic = {}
            s = input()
            for c in s:
                dic[c] = dic.get(c, 0) + 1

            if len(dic.keys()) >= 2 and len(dic.keys()) == len(set(dic.values())):
                ans += 1
        print(f"Case {Case}: {ans}")
        Case += 1
    except:
        break
