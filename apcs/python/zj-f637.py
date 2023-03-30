#!/usr/bin/env python 

def func(w):
    global idx
    idx += 1
    if s[idx] == '0':
        return 0
    elif s[idx] == '1':
        return w * w
    else:
        ret = 0
        for _ in range(4):
            ret += func(w//2)
        return ret

# main program
s = input()
width = int(input())
idx = -1
print(func(width))

