#!/usr/bin/env python 

import sys

lines = sys.stdin.readlines()
for s in lines[:-1]:
    h, m = s.split(':')
    h = int(h)
    m = int(m)
    angle = abs(30 * h + 0.5 * m - 6 * m)
    print(f"{min(angle, 360 - angle):.3f}")
