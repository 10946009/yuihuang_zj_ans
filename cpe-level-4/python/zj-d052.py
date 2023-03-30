#!/usr/bin/env python 

T = int(input())
for iter1 in range(T):
    n = int(input())
    if (n == 0):
        print(0)
        continue

    a = [None] * n
    for i in range(n):
        a[i] = int(input())

    LIS = [None] * n
    LDS = [None] * n
    ans = 0
    for i in range(n-1, -1, -1):
        LIS[i] = 1 #從後向前，計算最大上升子序列
        LDS[i] = 1 #從後向前，計算最大下降子序列
        for j in range(n-1, i, -1):
            if (a[i] > a[j]) and (LIS[i] <= LIS[j]):
                LIS[i] = LIS[j] + 1;
            if (a[i] < a[j]) and (LDS[i] <= LDS[j]):
                LDS[i] = LDS[j] + 1

        if (ans < LIS[i] + LDS[i] - 1):
            ans = LIS[i] + LDS[i] - 1

    print(ans)
