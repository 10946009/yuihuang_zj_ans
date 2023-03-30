#!/usr/bin/env python 

dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

def flood(r, c):
    for i in range(8):
        nr = r + dx[i]
        nc = c + dy[i]
        if nr >= 0 and nr < m and nc >= 0 and nc < n and g[nr][nc] == "@":
            g[nr][nc] = "*"
            flood(nr, nc)

while True:
    m, n = map(int, input().split())
    if m == 0 and n == 0:
        break
    g = []
    for _ in range(m):
        g.append(list(input()))

    ans = 0
    for i in range(m):
        for j in range(n):
            if g[i][j] == "@":
                ans += 1
                flood(i, j)
    print(ans)

