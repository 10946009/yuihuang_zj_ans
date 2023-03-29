#!/usr/bin/env python 

while True:
    try:
        n = int(input())
        lst = []
        for _ in range(n):
            p, b = map(int, input().split())
            lst.append((b, p))

        lst.sort(key = lambda x: (x[0], x[1]))
        cpt = 0 #累計花費的印刷時間
        ans = 0
        while len(lst):
            tp = lst.pop()
            cpt += tp[1]
            ans = max(ans, cpt + tp[0])
        print(ans)
        print()
        _ = input() #兩筆測資之間有一空白列
    except:
        break
