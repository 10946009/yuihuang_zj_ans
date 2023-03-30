
#include <iostream>
#include <map>
using namespace std;

int main() {
    int L, N;
    string s1, s2;
    cin >> L >> N;
    map <string, string> mp;
    for (int i = 0; i < L; i++){
        cin >> s1 >> s2;
        mp[s1] = s2;
    }
    for (int i = 0; i < N; i++){
        cin >> s1;
        int len = (int)s1.size();
        if (mp.count(s1)){
            //沒有規則的類型
            cout << mp[s1] << "\n";
        } else if (s1[len-1] == 'y'){
            if (s1[len-2] != 'a' && s1[len-2] != 'e' && s1[len-2] != 'i' && s1[len-2] != 'o' && s1[len-2] != 'u'){
                //以子音字母接"y"結尾，請以"ies"取代"y"
                s1[len-1] = 'i';
                cout << s1 << "es\n";
            } else cout << s1 << "s\n";
        } else if (s1[len-1] == 'o' || s1[len-1] == 's' || s1[len-1] == 'x'){
            //單字以"o", "s", "x"結尾，請在字尾多加上"es"
            cout << s1 << "es\n";
        } else if ((s1[len-2] == 'c' || s1[len-2] == 's') && s1[len-1] == 'h'){
            //單字以"ch", "sh"結尾，請在字尾多加上"es"
            cout << s1 << "es\n";
        } else cout << s1 << "s\n";
    }
}
