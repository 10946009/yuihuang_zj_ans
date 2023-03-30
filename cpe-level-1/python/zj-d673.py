#!/usr/bin/env python 

TC = 1
while True:
    S = int(input())
    if S < 0:
        break
    
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    print(f"Case {TC}:")
    TC += 1
    
    for i in range(12):
        if b[i] <= S:
            print("No problem! :D")
            S -= b[i]
        else:
            print("No problem. :(")
        S += a[i]
