#!/usr/bin/env python 

cnt = 0
while True:
    try:
        s = input()
        for i in range(len(s)):
            if s[i] == '"':
                if cnt % 2 == 0:
                    print("``", end="")
                else:
                    print("''", end="")
                cnt += 1
            else:
                print(s[i], end="")
        print()
    except:
        break
