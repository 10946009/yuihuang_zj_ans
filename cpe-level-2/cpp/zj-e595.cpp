
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    while (cin >> str){
        string s = "$";
        for (int i = 0; i < str.length(); i++){
            s += str[i];
            s += '$';
        }
        int mid = 0, len = 0, ans[(int)s.length()];
        for (int i = 1; i < s.length(); i++){
            ans[i] = 0;
            if (mid+len > i) ans[i] = min(mid+len-i, ans[mid-(i-mid)]);
            while (i+ans[i]+1 < s.length() && i-ans[i]-1 >= 0){
                int tmp = ans[i]+1;
                if (s[i-tmp] == s[i+tmp]) ans[i]++;
                else break;
            }
            if (i+ans[i] > mid+len){
                mid = i;
                len = ans[i];
            }
            if (i+ans[i] == s.length()-1){
                string sub = str.substr(0, str.length()-ans[i]);
                reverse(sub.begin(), sub.end());
                cout << str << sub << "\n";
                break;
            }
        }
    }
    return 0;
}
