#!/usr/bin/env python 

# AC (0.1s, 7.2MB)
while True:
    try:
        n = int(input())
        
        p = [-1] * (n+1) # parent
        d = [-1] * (n+1) # distance
        d[0] = 0
        num = [0] * (n+1) # childrenCount
        for i in range(1, n+1):
            temp = list(map(int, input().split()))
            num[i] = temp.pop(0)
            for child in temp:
                p[child] = i
            
        child = []
        for i in range(1, n+1):
            if p[i] == -1:
                root = i
            if num[i] == 0:
                child.append(i)
                d[i] = 0
        
        while child:
            node = child.pop(0)
            d[p[node]] = max(d[p[node]], d[node] + 1)
            num[p[node]] -= 1
            if num[p[node]] == 0 and p[p[node]] != -1:
                child.append(p[node])
        
        print(root)
        print(sum(d))
    except:
        break
