#!/usr/bin/env python 

dic = {
       "HELLO": "ENGLISH",
       "HOLA": "SPANISH",
       "HALLO": "GERMAN",
       "BONJOUR": "FRENCH",
       "CIAO": "ITALIAN",
       "ZDRAVSTVUJTE": "RUSSIAN",
       }

TC = 1
while True:
    s = input()
    if s == "#":
        break
    
    print(f"Case {TC}: ", end="")
    TC += 1
    if s in dic.keys():
        print(dic[s])
    else:
        print("UNKNOWN")
