#!/usr/bin/env python 

while True:
    try:
        n = int(input())
        lst = list(map(int, input().split()))
        total = 0
        maxi = lst[0]
        for num in lst:
            total += num
            if total > maxi:
                maxi = total
            if total < 0:
                total = 0
        if maxi <= 0:
            print('Losing streak.')
        else:
            print('The maximum winning streak is ', maxi, '.', sep = '')
    except:
        break
