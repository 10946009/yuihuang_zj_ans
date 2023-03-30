#!/usr/bin/env python 

import math

T =  int(input())
while T:
    T -= 1
    n, m = map(int, input().split())
    print(math.ceil((n - 2) / 3) * math.ceil((m - 2) / 3))
