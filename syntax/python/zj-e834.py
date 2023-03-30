#!/usr/bin/env python 

M = int(input())
lst = list(map(int, input().split()))
for x in lst[:-1]:
    if x % M == 0:
        # 若下訂量符合出貨條件，則輸出小瑜需準備多少份數的商品
        print(x // M)
    else:
        # 輸出買家需再多下訂幾件商品才符合出貨條件
        print(M - (x % M))
