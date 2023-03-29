import requests
from bs4 import BeautifulSoup
import os
# 在這裡把要爬取目錄的網址放進去
# 範例 放入 https://yuihuang.com/syntax/  ，會抓取超連結文字為Link的網址，並進去抓cpp&python code

# 是cpp的程式碼會被放到cpp資料夾，如果是python或"以外"的都會被放入python資料夾
# cpp的偵測條件是code裡有沒有 '<iostream>'
url_list = ['https://yuihuang.com/syntax/']

# -----------------------------code---------------------------------------------
#黃惟網站中有題解的會附上Link的連結文字，根據這點去爬網址
def get_yuihuang_link_url(urls,cpp_path,python_path):
    #把黃惟網站上有關題解Link的網址爬下來
    for url in urls:
        link_list = []
        html = requests.get(url)
        html.encoding = 'UTF-8'
        sp = BeautifulSoup(html.text, 'html.parser')
        all_ahref = sp.find_all('a')
        #抓文字是Link的連結
        for a in all_ahref:
            if a.text == 'Link':
                link_list.append(a['href'])
        # 查看爬到的網址為何
        # print(link_list)
        get_yuihuang_ans(link_list,cpp_path,python_path)

def get_yuihuang_ans(link_list,cpp_path,python_path):
    try:
        for link in link_list:
            print('hello!',link)
            html = requests.get(link)
            html.encoding = 'UTF-8'
            problem_name = link[21:-1]

            #欄位第一個是題號，後面放答案
            ans_list = {'name':problem_name,'python':[],'cpp':[]}
            sp = BeautifulSoup(html.text, 'html.parser')
            #抓取答案
            code_ans = sp.find_all('div',class_='wp-block-syntaxhighlighter-code')
            for ans in code_ans:
                if '<iostream>' in ans.text:
                    ans_list['cpp'].append(ans.text)
                else:
                    ans_list['python'].append(ans.text)
            ans_write_file(ans_list,cpp_path,python_path)
    except Exception as e:
        print(e)
        print(link,'有問題')

def ans_write_file(ans_list,cpp_path,python_path):
    name = ans_list['name']
    
    #如果是cpp的答案
    if ans_list['cpp'] != []:
        for index, p in enumerate(ans_list['cpp']):
            filename = name
            #如果有兩種答案
            if index != 0:
                filename +=f'_{index+1}'

            #寫入
            f = open(f'{cpp_path}/{filename}.cpp','a')
            f.write(ans_list['cpp'][index])
            f.close()
    
    #如果是python的答案
    if ans_list['python'] != []:
        for index,p in enumerate(ans_list['python']):
            filename = name
            #如果有兩種答案
            if index != 0:
                filename +=f'_{index+1}'
            
            #寫入
            f = open(f'{python_path}/{filename}.py','a')
            f.write('#!/usr/bin/env python \n'+ans_list['python'][index])
            f.close()

python_path =os.getcwd()+'/python'
cpp_path = os.getcwd()+'/cpp'

if not os.path.isdir(python_path):
    os.mkdir(python_path)

if not os.path.isdir(cpp_path):
    os.mkdir(cpp_path)


get_yuihuang_link_url(url_list,cpp_path,python_path)