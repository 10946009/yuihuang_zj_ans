#!/usr/bin/env python 

while True:
    try:
        a, b, c = map(int, input().split())
        if a != 0:
            a = 1
        if b != 0:
            b = 1
        if c == 0:
            c = False
        else:
            c = True
        flag = False
        if (a and b) == c:
            print('AND')
            flag = True
        if (a or b) == c:
            print('OR')
            flag = True
        if (a != b) == c:
            print('XOR')
            flag = True
        if not flag:
            print('IMPOSSIBLE')
    except:
        break
