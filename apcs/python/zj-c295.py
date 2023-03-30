#!/usr/bin/env python 

while True:
    try:
        n, m = map(int, input().split())
        lst = []
        total = 0
        for i in range(n):
            templst = list(map(int, input().split()))
            num = max(templst)
            total += num
            lst.append(num)
        print(total)
        anslst = []
        for num in lst:
            if total % num == 0:
                anslst.append(num)  
        if anslst:
            print(' '.join([str(i) for i in anslst]))
        else:
            print(-1)
    except:
        break
