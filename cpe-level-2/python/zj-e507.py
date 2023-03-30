#!/usr/bin/env python 

while True:
    try:
        a = input()
        b = input()
        cntA = [0 for _ in range(26)]
        for i in range(len(a)):
            cntA[ord(a[i]) - 97] += 1

        cntB = [0 for _ in range(26)]
        for i in range(len(b)):
            cntB[ord(b[i]) - 97] += 1

        ans = ""
        for i in range(26):
            ans += chr(i+97) * min(cntA[i], cntB[i])
        print(ans)
    except:
        break

