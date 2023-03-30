#!/usr/bin/env python 

while True:
    try:
        m, n = map(int, input().split())
        S = list(map(str, input().split()))
        dic = {}
        color = 0;
        for i in range(m):
            if S[i] not in dic.keys():
                color += 1
            dic[S[i]] = dic.get(S[i], 0) + 1

        if (color == m):
            ans = 1
        else:
            ans = 0

        L = 0
        R = m
        while (R < n):
            dic[S[L]] -= 1
            if (dic[S[L]] == 0):
                color -= 1
            if (dic.get(S[R], 0) == 0):
                color += 1
            dic[S[R]] = dic.get(S[R], 0) + 1
            if (color == m):
                ans += 1
            L += 1
            R += 1

        print(ans)
    except:
        break;
