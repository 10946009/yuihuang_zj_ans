#!/usr/bin/env python 

while True:
    try:
        str1 = input()
        str2 = input()
        l1 = len(str1)
        l2 = len(str2)
        lst1 = [0] * (l1+1)
        lst2 = [0] * (l1+1)
        for i in range(l2):
            for j in range(l1):
                if str1[j] == str2[i]:
                    lst2[j+1] = lst1[j]+1
                else:
                    lst2[j+1] = max(lst2[j],  lst1[j+1])
            lst1 = lst2[:]
        print(lst2[-1])
    except:
        break
