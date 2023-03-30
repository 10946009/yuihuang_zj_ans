#!/usr/bin/env python 

T = int(input())

for TC in range(1, T+1):
    page = []
    score = []
    for i in range(10):
        s, v = input().split()
        page.append(s)
        score.append(int(v))
    
    mx = 100
    found = 0
    print(f"Case #{TC}:")
    while mx > 0 and found == 0:
        for i in range(10):
            if score[i] == mx:
                print(page[i])
                found += 1
        mx -= 1
