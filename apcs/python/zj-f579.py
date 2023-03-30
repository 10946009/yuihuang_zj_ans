#!/usr/bin/env python 

a, b = map(int, input().split())
n = int(input())
cart = [dict() for _ in range(n)]
for i in range(n):
    lst = list(map(int, input().split()))
    for j in lst[:-1]:
        if j > 0:
            cart[i][j] = cart[i].get(j, 0) + 1
        else:
            cart[i][abs(j)] = max(cart[i].get(abs(j), 0) - 1, 0)

ans = 0
for i in range(n):
    flag_a = cart[i].get(a, 0) > 0
    flag_b = cart[i].get(b, 0) > 0
    ans += flag_a and flag_b
print(ans)
