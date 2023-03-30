
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    string s;
    cin >> T;
    while (T--){
        cin >> s;
        int n1 = 0;
        for (int i = 0; i < 3; i++){
            n1 += (s[i] - 'A') * (int)pow(26, 2-i);
        }
        int n2 = 0;
        for (int i = 4; i < 8; i++){
            n2 *= 10;
            n2 += s[i] - '0';
        }
        if (abs(n1-n2) <= 100) cout << "nice\n";
        else cout << "not nice\n";
    }
    return 0;
}
