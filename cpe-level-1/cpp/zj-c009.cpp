
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    while (cin >> s){
        if (s[0] == '-') break;
        if (s[1] == 'x'){
            s = s.substr(2, s.size()-2);
            int n = 0;
            for (int i = 0; i < s.size(); i++){
                n *= 16;
                if (s[i] >= 'A') n += (s[i] - 'A') + 10;
                else n += s[i] - '0';
            }
            cout << n << "\n";
        } else {
            int n = 0;
            for (int i = 0; i < s.size(); i++){
                n *= 10;
                n += s[i] - '0';
            }
            s = "";
            while (n){
                if (n % 16 > 9){
                    s += 'A' + (n % 16 - 10);
                } else s += '0' + (n % 16);
                n /= 16;
            }
            reverse(s.begin(), s.end());
            cout << "0x" << s << "\n";
        }
    }
    return 0;
}
