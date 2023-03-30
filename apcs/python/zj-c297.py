#!/usr/bin/env python 

while True:
    try:
        dic = {}
        for i in range(9):
            lst = list(map(str, input().split()))
            dic[i] = lst[1:]
        target = int(input())
        out = 0
        num = -1
        score = 0
        b1 = 0
        b2 = 0
        b3 = 0
        b4 = 0
        while True:
            times = 0
            num = (num+1) % 9
            hit = dic[num].pop(0)
            if hit == 'SO' or hit == 'GO' or hit == 'FO':
                out += 1
                if out == target:
                    break
                if out % 3 == 0:
                    b1 = 0
                    b2 = 0
                    b3 = 0
                    b4 = 0                            
            elif hit == 'HR':
                times = 4
            else:
                times = int(hit[0])
            b4 = 1
            for j in range(times):
                b1, b2, b3, b4 = b2, b3, b4, b1
                if b4 == 1:
                    score += 1
                    b4 = 0
        print(score)
    except:
        break
