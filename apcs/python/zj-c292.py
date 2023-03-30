#!/usr/bin/env python 

while True:
    try:
        side = int(input())
        nextmove = int(input())
        lst = []
        for a in range(side):
            lst.append(list(map(int, input().split())))
        mid = side // 2
        i = mid
        j = mid
        step = 1
        ansstr = str(lst[i][j])
        for b in range((side-1)*2):
            if nextmove == 0:
                for k in range(step):
                    j -= 1
                    ansstr += str(lst[i][j])
            elif nextmove == 1:
                for k in range(step):
                    i -= 1
                    ansstr += str(lst[i][j])
            elif nextmove == 2:
                for k in range(step):
                    j += 1
                    ansstr += str(lst[i][j])
            elif nextmove == 3:
                for k in range(step):
                    i += 1
                    ansstr += str(lst[i][j])
            if b % 2 == 1:
                step += 1
            nextmove = (nextmove+1) % 4
            
        if nextmove == 0:
            for k in range(step-1):
                j -= 1
                ansstr += str(lst[i][j])
        elif nextmove == 1:
            for k in range(step-1):
                i -= 1
                ansstr += str(lst[i][j])
        elif nextmove == 2:
            for k in range(step-1):
                j += 1
                ansstr += str(lst[i][j])
        elif nextmove == 3:
            for k in range(step-1):
                i += 1
                ansstr += str(lst[i][j])
        print(ansstr)
    except:
        break
