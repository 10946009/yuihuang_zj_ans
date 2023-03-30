#!/usr/bin/env python 

T = int(input())
for _ in range(T):
    a = list(map(int, input().split()))
    a.sort()
    if a[0] == a[3]:
        print("square")
    elif a[0] == a[1] and a[2] == a[3]:
        print("rectangle")
    else:
        if a[0]+a[1]+a[2] > a[3]:
            print("quadrangle")
        else:
            print("banana")
