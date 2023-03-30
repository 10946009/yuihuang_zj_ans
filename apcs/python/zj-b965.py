#!/usr/bin/env python 

while True:
    try:
        r, c, m = map(int, input().strip().split())
        templst = []
        for i in range(r):
            templst.append(list(map(int, input().split())))
        lst = list(map(int, input().split()))
        for i in lst[::-1]:
            if i == 1:
                templst.reverse()
            else:    
                anslst = []
                for i in range(c-1, -1, -1):
                    anslst.append([])
                    for j in range(r):
                        anslst[-1].append(templst[j][i])
                c, r = r, c
                templst = anslst
                
        print(r, c)
        for i in range(r):
            for j in range(c):
                print(templst[i][j], end = '')
                if j != c-1:
                    print(' ', end = '')
            if i != r-1:
                print()
        print()
    except:
        break
