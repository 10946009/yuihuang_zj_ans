# yuihuang_zj_ans
## 在url_list把要爬取目錄的網址放進去
url_list = ['https://yuihuang.com/syntax/']

以 https://yuihuang.com/syntax/  範例，會抓取其超連結文字為Link的網址，並進去抓cpp&python code

是cpp的程式碼會被放到cpp資料夾，如果是python或"以外"的都會被放入python資料夾
cpp的偵測條件是code裡有沒有 '<iostream>'
