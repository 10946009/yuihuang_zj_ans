#!/usr/bin/env python 

T = int(input())

for TC in range(1, T+1):
    N = int(input())
    print(f"Case #{TC}: {N} ", end="")
    st = set()
    while N != 1:
        if N in st:
            break
        st.add(N)
        tmp = 0
        while N >= 10:
            tmp += (N % 10) ** 2
            N //= 10
        tmp += N * N
        N = tmp
    if N == 1:
        print("is a Happy number.")
    else:
        print("is an Unhappy number.")
