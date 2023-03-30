#!/usr/bin/env python 

while True:
    try:
        S = input()
        if len(S) == 0:
            print(0)
            break
        
        count = 0
        newWord = 1
        for i in range(len(S)):
            if S[i].isalpha():
                newWord = 0
            else:
                if not newWord:
                    count += 1
                newWord = 1
                
        count += (not newWord)
        print(count)
    except:
        break
