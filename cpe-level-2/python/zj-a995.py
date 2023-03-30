#!/usr/bin/env python 

import math
while True:
    try:
        S = float(input())
        r1 = math.sqrt(3) / 2 * S
        r2 = (math.sqrt(3) * 2 - 3) * S
        r3 = math.sqrt(3) / 4 * S
        a = 5 / 3
        b = 7 / math.sqrt(3) * S
        c = -7 / 4 * S * S
        r4 = (-b + math.sqrt(b*b - 4*a*c)) / (2*a)
        print(f"{r1:.10f} {r2:.10f} {r3:.10f} {r4:.10f}")
    except:
        break
