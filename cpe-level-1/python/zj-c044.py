#!/usr/bin/env python 

while True:
    try:
        n = int(input())
        dic = {}
        for i in range(n):
            string = input()
            for c in string:
                c = c.lower()
                if not c.isalpha():
                    continue
                if c not in dic.keys():
                    dic[c] = 1
                else:
                    dic[c] += 1
        for k, v in sorted(dic.items(), key = lambda x:(-x[1], ord(x[0]))):
            print(k.upper(), v)
    except:
        break
