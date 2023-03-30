#!/usr/bin/env python 

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

R, C, k, m = map(int, input().split())
G = []
for i in range(R):
    G.append(list(map(int, input().split())))

G1 = [[None for i in range(C)] for j in range(R)]
for _ in range(m):
    for r in range(R):
        for c in range(C):
            if G[r][c] == -1:
                G1[r][c] = G[r][c]
            else:
                G1[r][c] = G[r][c]
                for i in range(4):
                    nx = r + dx[i]
                    ny = c + dy[i]
                    if nx >= 0 and nx < R and ny >= 0 and ny < C and G[nx][ny] != -1:
                        G1[r][c] -= G[r][c] // k
                        G1[r][c] += G[nx][ny] // k
    #不能寫 G = G1，除非使用deepcopy
    for r in range(R):
        for c in range(C):
            G[r][c]= G1[r][c]

mn = 1000000000
mx = 0
for r  in range(R):
    for c in range(C):
        if  G[r][c] != -1:
            mn = min(mn, G[r][c])
            mx = max(mx, G[r][c])
print(mn)
print(mx)

