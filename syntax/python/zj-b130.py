#!/usr/bin/env python 

N = int(input())
lst = list(map(int, input().split()))
lst = list(set(lst))
lst.sort()
print(len(lst))
print(" ".join(list(map(str, lst))))
