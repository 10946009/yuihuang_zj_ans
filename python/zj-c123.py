#!/usr/bin/env python 

while True:
    n = int(input())
    if n == 0:
        break
    while True:
        nums = list(map(int, input().split()))
        if len(nums) == 1 and nums[0] == 0:
            break
        station = [0]
        a = []
        flag = True
        for i in range(1, n+1):
            a.append(i)
        for num in nums:
            while True:
                if num == station[-1]:
                    station.pop()
                    break
                elif num > station[-1]:
                    station.append(a.pop(0))
                elif num < station[-1]:
                    flag = False
                    break
            if not flag:
                print('No')
                break
        else:
            print('Yes')
