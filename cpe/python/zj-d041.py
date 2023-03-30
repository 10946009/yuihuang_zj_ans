#!/usr/bin/env python 

T = int(input())
for TC in range(1, T+1):
    _ = input()
    s1 = input()
    s2 = input()
    s1 = [int(i) for i in s1.split('/')]
    s2 = [int(i) for i in s2.split('/')]
    dd1 = s1[0] + s1[1] * 31 + s1[2] * 400
    dd2 = s2[0] + s2[1] * 31 + s2[2] * 400
    if dd1 < dd2:
        print(f"Case #{TC}: Invalid birth date")
    elif (dd1 - dd2) // 400 > 130:
        print(f"Case #{TC}: Check birth date")
    else:
        print(f"Case #{TC}: {(dd1 - dd2) // 400}")
