#!/usr/bin/env python 

while True:
    try:
        T = int(input())
        break
    except:
        continue

for _ in range(T):
    D = int(input())
    dic = {}
    for i in range(D):
        name, n1, n2 = map(str, input().split())
        dic[name] = (int(n1), int(n2))

    Q = int(input())
    for i in range(Q):
        P = int(input())
        cnt = 0
        for name, n in dic.items():
            if n[0] <= P and P <= n[1]:
                ans = name
                cnt += 1
                
        if cnt == 1:
            print(ans)
        else:
            print("UNDETERMINED")
