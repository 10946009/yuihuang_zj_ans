#!/usr/bin/env python 

iters = 0

while True:
    n = int(input())
    if  n == 0:
        break
    bricks = list(map(int, input().split()))
    avg = sum(bricks) // n
    steps = 0
    for b in bricks:
        if b > avg:
            steps += b - avg
    iters += 1
    print(f"Set #{iters}")
    print(f"The minimum number of moves is {steps}.")
