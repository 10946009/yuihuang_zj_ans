#!/usr/bin/env python 

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

while True:
    try:
        n, m = map(int, input().split())
        a = [[0 for j in range(m)] for i in range(n)]
        x0 = -1
        y0 = -1
        z0 = 1000000
        for i in range(n):
            N = list(map(int, input().split()))
            for j, k in enumerate(N):
                a[i][j] = k
                if (k < z0):
                    x0 = i
                    y0 = j
                    z0 = k
        
        ans = 0
        ex = [[0 for j in range(m)] for i in range(n)]
        while (z0 < 1000000):
            ex[x0][y0] = 1
            ans += z0
            nxt_x = -1
            nxt_y = -1
            nxt_z = 1000000
            for i in range(4):
                nx = x0 + dx[i]
                ny = y0 + dy[i]
                if (nx >= 0) and (nx < n) and (ny >= 0) and (ny < m):
                    if (ex[nx][ny] == 0) and (a[nx][ny] < nxt_z):
                        nxt_x = nx
                        nxt_y = ny
                        nxt_z = a[nx][ny]
                        
            x0 = nxt_x
            y0 = nxt_y
            z0 = nxt_z

        print(ans)
    except:
        break
