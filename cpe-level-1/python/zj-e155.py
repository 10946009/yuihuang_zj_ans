#!/usr/bin/env python 

while True:
    n = int(input())
    if n == 0:
        break
    lst = []
    discard = []
    for i in range(1, n+1):
        lst.append(i)
    for i in range(n-1):
        discard.append(lst.pop(0))
        lst.append(lst.pop(0))
    print('Discarded cards:', ', '.join([str(c) for c in discard]))
    print('Remaining card:', lst[0])
