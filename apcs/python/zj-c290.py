#!/usr/bin/env python 

while True:
    try:
        a = 0
        b = 0
        numstr = input()
        for i in range(len(numstr)):
            if i % 2 == 0:
                a += int(numstr[i])
            else:
                b += int(numstr[i])
        print(abs(a-b))
    except:
        break
