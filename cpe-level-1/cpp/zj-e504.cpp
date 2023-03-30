
#include <iostream>
#include <map>
using namespace std;

int main() {
    map <char, int> mp;
    mp['W'] = 64;
    mp['H'] = 32;
    mp['Q'] = 16;
    mp['E'] = 8;
    mp['S'] = 4;
    mp['T'] = 2;
    mp['X'] = 1;
    string s;
    while (cin >> s){
        if (s == "*") break;
        int sum = 0, ans = 0;
        for (int i = 1; i < s.size(); i++){
            if (s[i] == '/'){
                if (sum == 64) ans++;
                sum = 0;
            } else {
                sum += mp[s[i]];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
