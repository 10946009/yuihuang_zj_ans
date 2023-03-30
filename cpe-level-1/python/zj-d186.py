#!/usr/bin/env python 

while True:
    a, b = map(int, input().split())
    if a + b == 0:
        break
    
    n1 = int(a ** 0.5)
    n2 = int(b ** 0.5)
    if n1 * n1 != a:
        n1 += 1
    print(n2 - n1 + 1)
