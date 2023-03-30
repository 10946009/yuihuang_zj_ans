#!/usr/bin/env python 

#簡單的輸入方法
s = input()
#第一種輸出寫法
print("hello,", s)
#第二種輸出寫法, 加上sep及end參數來控制列印格式
print("hello, ", s, sep="", end="\n")
#第三種輸出寫法, f-string
print(f"hello, {s}")
