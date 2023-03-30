#!/usr/bin/env python 

a = []
for i in range(4):
    x = list(map(int, input().split()))
    a.append(sum(x))

print(f"{a[0]}:{a[1]}")
print(f"{a[2]}:{a[3]}")

if (a[0] > a[1] and a[2] > a[3]):
    print("Win")
elif (a[0] < a[1] and a[2] < a[3]):
    print("Lose")
else:
    print("Tie")
