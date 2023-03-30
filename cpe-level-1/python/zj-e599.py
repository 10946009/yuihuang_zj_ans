#!/usr/bin/env python 

def check():
    for i in range(5):
        if len(set(M[i])) == 1:
            return True
    for j in range(5):
        col = [M[i][j] for i in range(5)]
        if len(set(col)) == 1:
            return True
    if len(set([M[i][i] for i in range(5)])) == 1:
        return True
    if len(set([M[i][4-i] for i in range(5)])) == 1:
        return True
    return False

T = int(input())
for Case in range(T):
    M = []
    for i in range(5):
        M.append(list(map(int, input().split())))

    M[2].insert(2, -1)
    dic = {}
    for i in range(5):
        for j in range(5):
            dic[M[i][j]] = (i, j)
            
    N = []
    while len(N) < 75:
        N.extend(list(map(int, input().split())))
    for i in range(75):
        if N[i] in dic:
            r, c = dic[N[i]]
            M[r][c] = -1
            if check():
                print(f"BINGO after {i+1} numbers announced")
                break
