
#include <iostream>
using namespace std;
#define MOD 131071

int main() {
    string s, buf;
    while (cin >> buf){
        s = buf;
        while (buf[buf.size()-1] != '#'){
            cin >> buf;
            s += buf;
        }
        long long mul = 2;
        long long ans = s[s.size()-2] - '0';
        for (int i = s.size()-3; i >= 0; i--){
            if (s[i] == '1'){
                ans += mul;
                ans %= MOD;
            }
            mul *= mul;
            mul %= MOD;
        }
        if (ans) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
