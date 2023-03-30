#!/usr/bin/env python 

TC = 1

while True:
    try:
        N = int(input())
        a = list(map(int, input().split()))
        st = set()
        flag = True
        for i in range(N):
            for j in range(i, N):
                tmp = a[i] + a[j]
                if tmp in st:
                    flag = False
                    break
                st.add(tmp)
            if not flag:
                break
        
        print(f"Case #{TC}: It is ", end="")
        if not flag:
            print("not ", end="")
        print("a B2-Sequence.")
        print()
        TC += 1
    except:
        break
