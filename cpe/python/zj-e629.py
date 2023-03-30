#!/usr/bin/env python 

Case = 1
while True:
    S = int(input())
    if S == 0:
        break
    print(f"Case {Case}: ", end="")
    Case += 1
    if S == 1:
        print(1)
        continue
    ans = -1
    for i in range(S-1, 0, -1):
        Sum = 0
        for j in range(1, int(i**0.5)+1):
            if i % j == 0:
                Sum += j
                if j*j != i:
                    Sum += i // j

        if Sum == S:
            ans = i
            break
    print(ans)
