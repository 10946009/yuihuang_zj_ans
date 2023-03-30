#!/usr/bin/env python 

import sys
for line in sys.stdin.readlines():
    M, N = map(int, line.split())
    print(M * N - 1)
