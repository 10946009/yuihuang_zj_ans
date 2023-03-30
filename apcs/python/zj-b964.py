#!/usr/bin/env python 

n = int(input())
scores = list(map(int, input().split())) #記錄所有學生分數的list
scores.sort() #由小到大排序

min_score = 101 #用來記錄及格者的最低分數
max_score = -1 #用來記錄及不及格者的最高分數

for score in scores:
	if score >= 60: #及格
		min_score = min(score, min_score)
	else: #不及格
		max_score = max(score, max_score)
		
print(' '.join(str(score) for score in scores))

if max_score == -1: #沒有人不及格
	print('best case')
else:
	print(max_score)
	
if min_score == 101: #沒有人及格
	print('worst case')
else:
	print(min_score)
