#!/usr/bin/env python 

A1, B1, C1 =  map(int, input().split())
A2, B2, C2 =  map(int, input().split())
n = int(input())

# 答案可能為負值
mx = -1000000000
# 每個員工皆需分配到其中一個工廠，但工廠可能沒有員工
for i in range(n+1):
    tmp = A1 * i * i + B1 * i + C1
    j = n - i
    tmp += A2 * j * j + B2 * j + C2
    mx = max(mx, tmp)

print(mx)
