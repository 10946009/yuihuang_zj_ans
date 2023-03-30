#!/usr/bin/env python 

while True:
    s = input()
    if s == '0':
        break
    
    result = ''
    for i in range(1, int(s)):
        if i % 7 != 0:
            result += str(i) + ' '
    print(result[:-1])
