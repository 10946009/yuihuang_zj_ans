#!/usr/bin/env python 

def my_sort(a):
    n = len(a)
    for i in range(n-1):
        for j in range(i+1, n):
            if a[i]+a[j] < a[j]+a[i]:
                a[i], a[j] = a[j], a[i]
    return a
    
    
while True:
    N = int(input().strip())
    if N == 0:
        break
    
    nums = input().strip().split()
    
    nums = my_sort(nums)
    print("".join(nums))
