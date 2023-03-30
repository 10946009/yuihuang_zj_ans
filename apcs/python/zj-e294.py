#!/usr/bin/env python 

while True:
    try:
        s = input()
        a = [int(c) for c in s]
        N = int(s)
        # N1: 比 N 大的完全奇數
        b = [0 for _ in range(len(s))]
        for i in range(len(a)):
            if a[i] % 2 == 0:
                b[i] = a[i] + 1
                for j in range(i+1, len(a)):
                    b[j] = 1
                break
            else:
                b[i] = a[i]
        N1 = int(''.join([str(i) for i in b]))
        # N2: 比 N 小的完全奇數
        b = [0 for _ in range(len(s))]
        for i in range(len(a)):
            if a[i] % 2 == 0:
                if (a[i] == 0):
                    b[i] = 9
                    idx = i - 1
                    while idx > 0 and a[idx] == 1:
                        b[idx] = 9
                        idx -= 1
                    b[idx] -= 2
                    if b[idx] < 0:
                        b[idx] = 0
                else:
                    b[i] = a[i] - 1
                for j in range(i+1, len(a)):
                    b[j] = 9
                break
            else:
                b[i] = a[i]
        N2 = int(''.join([str(i) for i in b]))

        print(min(N1 - N, N - N2))
    except:
        break
