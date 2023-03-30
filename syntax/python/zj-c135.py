#!/usr/bin/env python 

g = [
    [[0, 1, 0], [1, 0, 1], [0, 0, 0], [1, 0, 1], [0, 1, 0]], #0
    [[0, 0, 0], [0, 0, 1], [0, 0, 0], [0, 0, 1], [0, 0, 0]], #1
    [[0, 1, 0], [0, 0, 1], [0, 1, 0], [1, 0, 0], [0, 1, 0]], #2
    [[0, 1, 0], [0, 0, 1], [0, 1, 0], [0, 0, 1], [0, 1, 0]], #3
    [[0, 0, 0], [1, 0, 1], [0, 1, 0], [0, 0, 1], [0, 0, 0]], #4
    [[0, 1, 0], [1, 0, 0], [0, 1, 0], [0, 0, 1], [0, 1, 0]], #5
    [[0, 1, 0], [1, 0, 0], [0, 1, 0], [1, 0, 1], [0, 1, 0]], #6
    [[0, 1, 0], [0, 0, 1], [0, 0, 0], [0, 0, 1], [0, 0, 0]], #7
    [[0, 1, 0], [1, 0, 1], [0, 1, 0], [1, 0, 1], [0, 1, 0]], #8
    [[0, 1, 0], [1, 0, 1], [0, 1, 0], [0, 0, 1], [0, 1, 0]], #9
]

while True:
    s, n = map(str, input().split())
    s = int(s)
    if s == 0:
        break

    for i in range (5):
        if i % 2 == 1:
            for l in range(s):
                for j in range(len(n)):
                    if g[int(n[j])][i][0]:
                        print("|", end="")
                    else:
                        print(" ", end="")

                    for k in range(s):
                        print(" ", end="")

                    if g[int(n[j])][i][2]:
                        print("|", end="")
                    else:
                        print(" ", end="")
                    print(" ", end="")
                print()
        else:
            for j in range(len(n)):
                print(" ", end="")
                for k in range(s):
                    if g[int(n[j])][i][1]:
                        print("-", end="")
                    else:
                        print(" ", end="")

                print(" ", end="")
                print(" ", end="")
            print()

