#!/usr/bin/env python 

N = int(input())
# 轉為 zero-based
N -= 1
if N < 2500:
    #第一大區, 每排各有 25 人
    print(f"1 {N // 25 + 1} {N % 25 + 1}")
elif N < 7500:
    #第二大區，每排各有 50 人
    N -= 2500
    print(f"2 {N // 50 + 1} {N % 50 + 1}")
else:
    #第三大區, 每排各有 25 人
    N -= 7500
    print(f"3 {N // 25 + 1} {N % 25 + 1}")
