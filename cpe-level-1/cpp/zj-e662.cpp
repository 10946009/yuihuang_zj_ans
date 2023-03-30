
#include <iostream>
using namespace std;

int main() {
    int N;
    string s;
    while (cin >> N >> s){
        string ans = "";
        if (N == 0 && s == "0") break;
        for (int i = 0; i < s.size(); i++){
            if (s[i] - '0' == N) continue;
            else {
                if (s[i] == '0' && ans == "") continue;
                ans += s[i];
            }
        }
        if (ans == "") cout << "0\n";
        else cout << ans << "\n";
    }
    return 0;
}
