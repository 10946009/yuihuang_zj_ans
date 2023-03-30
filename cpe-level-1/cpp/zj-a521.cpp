
#include <iostream>
#include <algorithm>
using namespace std;
string s;

string num2str(int x){
    string ret = "";
    while (x){
        ret += '0' + (x % 10);
        x /= 10;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

int str2num(string t){
    int ret = 0;
    for (int i = 0; i < t.size(); i++){
        ret *= 10;
        ret += t[i] - '0';
    }
    return ret;
}

int check(int ST){
    string s1 = "";
    for (int i = 0; i < s.size(); i++){
        int x = ST + (s[i] - 'A');
        s1 += num2str(x);
    }
    string s2 = "";
    while (s1.size() >= 3){
        if (s1.size() == 3 && str2num(s1) == 100) break;
        s2 = "";
        for (int i = 0; i < s1.size()-1; i++){
            int x = (s1[i] - '0') + (s1[i+1] - '0');
            s2 += ('0' + (x % 10));
        }
        s1 = s2;
    }
    return str2num(s1);
}

int main() {
    while (cin >> s){
        int i;
        for (i = 1; i <= 10000; i++){
            if (check(i) == 100) {
                cout << i << "\n";
                break;
            }
        }
        if (i > 10000) cout << ":(\n";
    }
    return 0;
}

