#!/usr/bin/env python 

while True:
    try:
        K, Q, N = map(int, input().strip().split())
        
        if (K == Q):
            print("Illegal state")
            continue
        
        kx = K // 8
        ky = K % 8
        qx = Q // 8
        qy = Q % 8
        nx = N // 8
        ny = N % 8
        
        if (qy != ny) and (qx != nx):
            print("Illegal move")
            continue
    
        if (Q == N) or (K == N):
            print("Illegal move")
            continue
        
        if (qy == ny) and (ny == ky):
            if (qx > nx) and (kx < qx) and (kx >= nx):
                print("Illegal move")
                continue
            
            if (qx < nx) and (kx > qx) and (kx <= nx):
                print("Illegal move")
                continue
        elif (qx == nx) and (nx == kx):
            if (qy > ny) and (ky < qy) and (ky >= ny):
                print("Illegal move")
                continue
            if (qy < ny) and (ky > qy) and (ky <= ny):
                print("Illegal move")
                continue
        
        if (((abs(nx-kx)==1) and (ny==ky)) or ((nx==kx) and (abs(ny-ky)==1))):
            print("Move not allowed")
            continue
        
        flag = False
        if (kx+1 < 8) and (kx+1 != nx) and (ky != ny):
            flag = True
        if (kx-1 >= 0) and (kx-1 != nx) and (ky != ny):
            flag = True
        if (ky+1 < 8) and (kx != nx) and (ky+1 != ny):
            flag = True
        if (ky-1 >= 0) and (kx != nx) and (ky-1 != ny):
            flag = True
        if flag:
            print("Continue")
        else:
            print("Stop")
    except:
        break
