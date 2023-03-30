#!/usr/bin/env python 

N, M, K = map(int, input().split())
Q = []
for _ in range(N):
    Q.append(list(map(int, input().split())))
    
cost = [0 for _ in range(K)]
for k in range(K):
    c = list(map(int, input().split()))
    traffic = [[0 for i in range(M)] for j in range(M)]
    for i in range(N):
        for j in range(M):
            traffic[c[i]][j] += Q[i][j]
            
    for i in range(M):
        for j in range(M):
            if i == j:
                cost[k] += traffic[i][j]
            else:
                if traffic[i][j] <= 1000:
                    cost[k] += traffic[i][j] * 3
                else:
                    cost[k] += 1000 * 3
                    cost[k] += (traffic[i][j] - 1000) * 2
                    
print(min(cost))
            
