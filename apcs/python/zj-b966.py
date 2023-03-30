#!/usr/bin/env python 

while True:
    try:
        n = int(input())
        lst = []
        for i in range(n):
            l, r = map(int, input().split())
            lst.append([l, r])
        lst.sort(key = lambda x:(x[0], x[1]))
        for i in range(1, len(lst)):
            if lst[i][1] < lst[i-1][1]:
                lst[i] = lst[i-1]
                lst[i-1] = []
            elif lst[i-1][1] < lst[i][0]:
                continue
            else:
                lst[i][0] = lst[i-1][0]
                lst[i-1] = []
        count = 0
        for part in lst:
            if part != []:
                count += (part[1]-part[0])
                
        print(count)
    except:
        break
