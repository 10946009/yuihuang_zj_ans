#!/usr/bin/env python 

T = int(input())
for _ in range(T):
    s = input() #第一行為一個空白行
    s = input()
    L = len(s)
    period = 1
    while period <= L:
        st = set()
        if len(s) % period == 0:
            for i in range(0, L, period):
                st.add(s[i:i+period])
                
        if len(st) == 1:
            break
        else:
            period += 1
        
    print(period)
