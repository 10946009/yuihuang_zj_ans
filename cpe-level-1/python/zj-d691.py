#!/usr/bin/env python 

while True:
    try:
        A = set(map(int, input().split()))
        B = set(map(int, input().split()))
        
        if A == B:
            print("A equals B")
        elif A.issubset(B):
            print("A is a proper subset of B")
        elif B.issubset(A):
            print("B is a proper subset of A")
        elif A.isdisjoint(B):
            print("A and B are disjoint")
        else:
            print("I'm confused!")
    except:
        break
