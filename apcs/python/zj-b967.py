#!/usr/bin/env python 

while True:
    try:
        N = int(input())
        parent = [-1 for _ in range(N)]
        children = [list() for _ in range(N)]
        for _ in range(N-1):
            a, b = map(int, input().split())
            parent[b] = a
            children[a].append(b)

        leaf = list()
        for i in range(N):
            if (len(children[i]) == 0):
                leaf.append(i)

        for i in range(N):
            if (parent[i] == -1):
                root = i
                break

        depth = [0 for _ in range(N)]
        for x in leaf:
            now = x
            depth[now] = 0
            while (parent[now] != -1):
                depth[parent[now]] = max(depth[parent[now]], depth[now]+1)
                now = parent[now]

        ans = 0
        for i in range(N):
            d = list()
            for x in children[i]:
                d.append(depth[x])
            d.sort()
            if (len(children[i]) == 1):
                ans = max(ans, d[-1]+1)
            elif (len(children[i]) > 1):
                ans = max(ans, d[-1]+d[-2]+2)
        print(ans)
    except:
        break
