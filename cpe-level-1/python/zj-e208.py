#!/usr/bin/env python 

T = int(input())
for Case in range(T):
    s = list(input())
    ans = f"Case {Case+1}: "

    ch = s[0]
    idx = 1
    cnt = 0
    while idx < len(s):
        if ord(s[idx]) >= 48 and ord(s[idx]) <= 57:
            cnt = cnt*10 + int(s[idx])
        else:
            for j in range(cnt):
                ans += ch
            ch = s[idx]
            cnt = 0
        idx += 1

    for j in range(cnt):
        ans += ch
    print(ans)
