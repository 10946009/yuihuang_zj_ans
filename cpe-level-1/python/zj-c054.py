#!/usr/bin/env python 

s = list("`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./")

while True:
    try:
        x = input()
        for i in range(len(x)):
            if x[i] in s[1:]:
                print(s[s.index(x[i]) - 1], end="")
            else:
                print(x[i], end="")
        print()
    except:
        break
