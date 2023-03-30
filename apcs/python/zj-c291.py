#!/usr/bin/env python 

# 本題輸入包含若干筆測試資料
while True:
    try:
        N = int(input()) # 團體中人數
        friend = list(map(int, input().split())) # 讀入每個人的好友編號
        ans = 0
        for i in range(N):
            if friend[i] != -1: # 發現一個還未被檢查過的人
                cur = i # cur (current): 目前受檢查者的編號
                while True:
                    nxt = friend[cur] # nxt (next): 他的好友的編號
                    friend[cur] = -1 # 標註成檢查過了
                    if nxt == i: # 形成一個環
                        break
                    cur = nxt # 繼續檢查朋友的朋友
                ans += 1
        print(ans)
    except:
        break
