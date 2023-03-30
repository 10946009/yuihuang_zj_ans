
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int T;
    string s;
    char head, tail;
    cin >> T;
    getline(cin, s); //混用cin與getline時，先清除前一個cin後的緩衝區
    while (T--){
        bool loop = true;
        int len = 0; //軌道個數

        getline(cin, s); //讀入整行測資，含空白

        if (s[0] == s[s.size()-1]) {
            //頭尾字元一樣的話，無法拼成一個環形軌道
            loop = false;
        } else {
            stringstream ss(s);
            ss >> s; //取出第一段軌道
            len = 1;
            tail = s[s.size()-1]; //第一段軌道的結尾
            while (ss >> s) {
                len++;
                head = s[0]; //次一段軌道的起始處
                if (head == tail) {
                    loop = false;
                    break;
                }
                tail = s[s.size()-1]; //目前軌道的結尾
            }
        }
        //需有一片以上的軌道，才能拼成環形
        if (len > 1 && loop) cout << "LOOP\n";
        else cout << "NO LOOP\n";
    }
    return 0;
}
