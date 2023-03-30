#!/usr/bin/env python 

while True:
    try:
        lst = list(map(int, input().split()))
        lst.sort()
        a = lst[0]
        b = lst[1]
        c = lst[2]
        print(a, b, c)
        if a + b <= c:
            print('No')
        elif a ** 2 + b ** 2 < c ** 2:
            print('Obtuse')
        elif a ** 2 + b ** 2 == c ** 2:
            print('Right')
        elif a ** 2 + b ** 2 > c ** 2:
            print('Acute')
    except:
        break
