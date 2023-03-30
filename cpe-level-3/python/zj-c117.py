#!/usr/bin/env python 

dx = [2, 2, -2, -2, 1, 1, -1, -1]
dy = [1, -1, 1, -1, 2, -2, 2, -2]
        
while True:
    try:
        s1, s2 = map(str, input().split())
        if s1 == s2:
            print(f"To get from {s1} to {s2} takes 0 knight moves.")
        else:
            x1 = ord(s1[0]) - ord('a')
            y1 = int(s1[1]) - 1
            x2 = ord(s2[0]) - ord('a')
            y2 = int(s2[1]) - 1
            
            
            q = [(x1, y1, 0)]
            flag = False
            while q:
                x, y, step = q[0][0], q[0][1], q[0][2]
                q.pop(0)
                for i in range(8):
                    nx = x + dx[i]
                    ny = y + dy[i]
                    if nx == x2 and ny == y2:
                        flag = True
                        print(f"To get from {s1} to {s2} takes {step+1} knight moves.")
                        break
                    if nx >= 0 and nx < 8 and ny >= 0 and ny < 8:
                        q.append((nx, ny, step+1))
                if flag:
                    break
    except:
        break

