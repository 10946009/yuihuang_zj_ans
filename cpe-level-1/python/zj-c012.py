#!/usr/bin/env python 

while True:
    try:
        dic = {}
        string = input()
        for c in string:
            if ord(c) not in dic.keys():
                dic[ord(c)] = 1
            else:
                dic[ord(c)] += 1
        for k, v in sorted(dic.items(), key = lambda x:(x[1], -x[0])):
            print(k, v)
    except:
        break
