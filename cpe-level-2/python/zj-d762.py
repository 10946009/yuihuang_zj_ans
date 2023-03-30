#!/usr/bin/env python 

import itertools

def dfs(idx, total):
    if idx==4:
        return total == 23

    if dfs(idx+1, total + lst[idx+1]):
        return True
    elif dfs(idx+1, total - lst[idx+1]):
        return True
    elif dfs(idx+1, total * lst[idx+1]):
        return True
    else:
        return False

while True:
    a = list(map(int, input().split()))
    if a[0]==0 and a[1]==0 and a[2]==0 and a[3]==0 and a[4]==0:
        break
    a.sort()
    A = set(list(itertools.permutations(a, 5)))
    flag = False
    for lst in A:
        if dfs(0, lst[0]):
            flag = True
            break

    if flag:
        print("Possible")
    else:
        print("Impossible")
