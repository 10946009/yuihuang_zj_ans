#!/usr/bin/env python 

while True:
    try:
        k = int(input())
        s = input()
        lst = [1 if c.isupper() else 0 for c in s]
        count = 1
        lst2 = []
        for i in range(1, len(lst)):
            if lst[i] == lst[i-1]:
                count += 1
            else:
                lst2.append(count)
                count = 1
        lst2.append(count)
        lst3 = []
        count = 0
        for i in range(0, len(lst2)):
            if lst2[i] == k:
                count += 1
            else:
                if i-count-1 >= 0:
                    if lst2[i-count-1] > k:
                        count += 1
                if lst2[i] > k:
                    count += 1
                lst3.append(count)
                count = 0
        if count > 0:
            if lst2[i-count] > k:
                count += 1
            lst3.append(count)
        print(max(lst3)*k)
    except:
        break
