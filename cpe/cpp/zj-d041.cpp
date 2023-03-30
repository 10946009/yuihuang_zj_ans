
#include <iostream>
using namespace std;

int str2int(string &s, int start, int len){
    int ret = 0;
    for (int i = start; i < start+len; i++){
        ret *= 10;
        ret += s[i] - '0';
    }
    return ret;
}

int main() {
    int T;
    string s1, s2;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> s1 >> s2;
        int dd1 = str2int(s1, 0, 2) + str2int(s1, 3, 2) * 31 + str2int(s1, 6, 4) * 400;
        int dd2 = str2int(s2, 0, 2) + str2int(s2, 3, 2) * 31 + str2int(s2, 6, 4) * 400;
        
        if (dd1 < dd2) cout << "Case #" << Case << ": Invalid birth date\n";
        else if ((dd1 - dd2) / 400 > 130) cout << "Case #" << Case << ": Check birth date\n";
        else cout << "Case #" << Case << ": " << (dd1 - dd2) / 400 << "\n";
    }
}
