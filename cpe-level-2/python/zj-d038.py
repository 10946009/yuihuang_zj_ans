#!/usr/bin/env python 

while True:
    try:
        n = int(input())
        if n ==  0:
            break
        a = 0
        b = 1
        for i in range(n):
            b += a
            a = b - a
        print(b)
    except:
        break
