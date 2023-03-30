#!/usr/bin/env python 

while True:
    try:
        n, l, w = map(int, input().split())
        w = w / 2
        v = []
        for _ in range(n):
            p, r = map(float, input().split())
            if (r > w):
                dx = (r*r - w*w) ** 0.5
                v.append((p-dx, p+dx))
        v.sort(key=lambda x: (x[0], -x[1]))
        ans = 0
        right = 0.0
        for i in range(len(v)):
            if v[i][0] > right:
                break
            for j in range(i+1, len(v)):
                if v[j][0] > right:
                    break
                if v[j][1] > v[i][1]:
                    i = j
            ans += 1
            right = v[i][1]
            if right >= l:
                break

        if right >= l:
            print(ans)
        else:
            print(-1)
    except:
        break
