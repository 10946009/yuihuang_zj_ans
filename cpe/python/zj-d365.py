#!/usr/bin/env python 

def bfs(x, y):
    q = [(x, y)]
    target = a[x][y]
    a[x][y] = '0'
    while q:
        x, y = q.pop(0)
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx >= 0 and nx < H and ny >= 0 and ny < W and a[nx][ny] == target:
                q.append((nx, ny))
                a[nx][ny] = '0'
    cnt[ord(target) - 97] += 1

#=== main ===
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

T = int(input())
for Case in range(1, T+1):
    H, W = map(int, input().split())
    a = []
    for i in range(H):
        a.append(list(input()))

    cnt = [0 for _ in range(26)]

    while True:
        x = 0
        y = 0
        flag = False
        for i in range(H):
            for j in range(W):
                if a[i][j] != '0':
                    x = i
                    y = j
                    flag = True
                    break
            if flag:
                break
        if flag:
            bfs(x, y)
        else:
            break

    mx = 0
    for i in range(26):
        if cnt[i] > mx:
            mx = cnt[i]

    print(f"World #{Case}")
    while mx:
        for i in range(26):
            if cnt[i] == mx:
                print(f"{chr(i+97)}: {cnt[i]}")
        mx -= 1
