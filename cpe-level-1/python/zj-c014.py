#!/usr/bin/env python 

while True:
    n1, n2 = map(str, input().split())
    if n1 == '0' and n2 == '0':
        break

    n1 = n1[::-1]
    n2 = n2[::-1]

    if len(n1) < len(n2):
        n1, n2 = n2, n1

    ans = 0
    carry = 0
    for i in range(len(n1)):
        tmp = carry + int(n1[i])
        if i < len(n2):
            tmp += int(n2[i])
        if tmp >= 10:
            ans += 1
        carry = tmp // 10

    if ans == 0:
        print("No carry operation.")
    elif ans == 1:
        print("1 carry operation.")
    else:
        print(f"{ans} carry operations.")

