#!/usr/bin/env python 

while True:
    n = input()
    if n == "0":
        break
    print(f"Original number was {n}")
    num =  list()
    cnt = 0
    while n not in num:
        a = ''.join(sorted(n))
        b = ''.join(sorted(n, reverse=True))
        num.append(n)
        n = str(int(b) - int(a))
        print(f"{int(b)} - {int(a)} = {n}")
        cnt += 1
    print(f"Chain length {cnt}")
