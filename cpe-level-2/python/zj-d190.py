#!/usr/bin/env python 

while True:
    n = int(input())
    if n == 0:
        break
    A = list(map(int, input().split()))
    dic = {}
    for a in A:
        dic[a] = dic.get(a, 0) + 1

    first = True
    for k in sorted(dic.keys()):
        for _ in range(dic[k]):
            if first:
                first = False
            else:
                print(" ", end="")
            print(k, end="")
    print()
