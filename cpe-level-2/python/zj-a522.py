#!/usr/bin/env python 

# 0 ≤ t ≤ 50，表示測資的筆數
t = int(input())
for iter1 in range(t):
    # 每筆測資三行，第一行有一個數字 n, 0 ≤ n ≤ 1000，表示我們所要的長度。
    n = int(input())
    # 第二行有一個數字 p, 1 ≤ p ≤ 20，表示我們所擁有的金屬棒的數量。
    p = int(input())
    # 第三行有 p 個數字，表示 p 根金屬棒的長度。
    P = list(map(int, input().split()))

    dp = [0 for i in range(n+1)]
    for i in P:
        for j in range(n, 0, -1):
            if (j >= i):
                dp[j] = max(dp[j], dp[j - i] + i)

    if (dp[n] == n):
        print("YES")
    else:
        print("NO")
