#!/usr/bin/env python 

def solve():
    if a[1] == 0:
        return
    q = [1]
    ans.append(a[1])
    while q:
        now = q.pop(0)
        left = now * 2
        right = now * 2 + 1
        if a[left]:
            ans.append(a[left])
            q.append(left)
        if a[right]:
            ans.append(a[right])
            q.append(right)

# main program
while True:
    try:
        total = 0
        a = [0 for _ in range(1<<15)]
        end = False
        flag = True
        ans = []
        while True:
            S = input().split()
            for s in S:
                if s == "()":
                    end = True
                    break
                total += 1
                idx = int(s[1:-1].split(',')[0])
                pos = 1
                for c in s[1:-1].split(',')[1]:
                    if c == 'L':
                        pos = pos * 2
                    else:
                        pos = pos * 2 + 1

                if a[pos]:
                    flag = False
                else:
                    a[pos] = idx
            if end:
                break

        if flag:
            solve()
            if len(ans) == total:
                first = True
                for i in ans:
                    if first:
                        first = False
                    else:
                        print(' ', end='')
                    print(i, end='')
                print()
            else:
                print("not complete")
        else:
            print("not complete")
    except:
        break
