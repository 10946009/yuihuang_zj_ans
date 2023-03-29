#!/usr/bin/env python 

a, b, c = map(int, input().split())

if b**2 - 4*a*c == 0:
    x = int(-b / (2*a))
    print(f"Two same roots x={x}")
elif b**2 - 4*a*c > 0:
    x = -b / (2*a)
    y = (b**2 - 4*a*c) ** 0.5 / (2*a)
    x1 = int(x + y)
    x2 = int(x - y)
    print(f"Two different roots x1={x1} , x2={x2}")
else:
    print("No real root")
