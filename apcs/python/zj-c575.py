#!/usr/bin/env python 

while True:
    try:
        n, k = map(int, input().split())
        lst = list(map(int, input().split()))
        lst.sort()
        
        dis = lst[-1] - lst[0]
        if dis <= 2:
            print(1)
            continue

        mn = 1
        mx = int(dis/k) + 1

        while True:
            mid = (mn + mx) // 2
            count = 0
            start = 0
            for j in range(k):
                dis2 = lst[start] + mid
                count += 1
                for l in range(start, n):
                    if lst[l] > dis2:
                        start = l
                        break
                else:
                    mx = mid
                    break
            else:
                mn = mid + 1

            if mn == mx:
                print(mn)
                break
    except:
        break
