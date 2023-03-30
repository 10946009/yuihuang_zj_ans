#!/usr/bin/env python 

s = []
while True:
    try:
        s.append(input())
    except:
        break
    
col = len(s)
row = 0
for i in range(col):
    row = max(row, len(s[i]))
    
for i in range(row):
    for j in range(col-1, -1, -1):
        if i >= len(s[j]):
            print(" ", end="")
        else:
            print(s[j][i], end="")
    print()
