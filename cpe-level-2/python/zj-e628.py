#!/usr/bin/env python 

while True:
    try:
        lst = input().split()
        m = int(lst[0])
        n = int(lst[2])
        if lst[1] == '/':
            print(m // n)
        else:
            print(m % n)
    except:
        break
