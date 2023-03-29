#!/usr/bin/env python 

n = int(input())
for i in range(n):
    s = input()
    dic = {}
    for c in s:
        if not c.isalpha():
            continue
        c = c.lower()
        dic[c] = dic.get(c, 0) + 1
    mx = max(dic.values())
    for c in sorted(dic.keys()):
        if dic[c] == mx:
            print(c, end="")
    print()
#!/usr/bin/env python 

n = int(input())
for i in range(n):
    s = input()
    dic = {}
    for c in s:
        if not c.isalpha():
            continue
        c = c.lower()
        dic[c] = dic.get(c, 0) + 1
    mx = max(dic.values())
    for c in sorted(dic.keys()):
        if dic[c] == mx:
            print(c, end="")
    print()
