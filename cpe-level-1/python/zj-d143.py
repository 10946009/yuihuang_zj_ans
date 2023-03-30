#!/usr/bin/env python 

T = int(input())
while T:
    T -= 1
    a, b = map(int, input().split())
    if a < b:
        print("<")
    elif a > b:
        print(">")
    else:
        print("=")
