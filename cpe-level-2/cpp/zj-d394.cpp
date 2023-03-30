
#include <iostream>
#include <cstring>
using namespace std;

int a[130], b[5], dot, n, l, r;
string s, s2;

void mul(){
    for (int i = 129; i >= 0; i--){
        for (int j = 4; j >= 0; j--){
            a[i+j] += a[i] * b[j];
        }
    }
    int hold = 0;
    for (int i = 0; i < 130; i++){
        a[i] += hold;
        if (a[i] >= 10){
            hold = a[i] / 10;
            a[i] %= 10;
        }
        else hold = 0;
    }
}

int main() {
    while (cin >> s >> s2){
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        n = 0;
        for (int i = 0; i < s2.length(); i++){
            n *= 10;
            n += s2[i]-'0';
        }
        while (s[s.length()-1] == '0') s = s.substr(0, s.length()-1);
        int cnt = s.length()-2;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '.'){
                dot = (int)s.length()-i-1;
            }
            else {
                b[cnt] = s[i]-'0';
                a[cnt] = s[i]-'0';
                cnt--;
            }
        }
        dot *= n;
        b[0]--;
        for (int i = 0; i < 4; i++){
            if (b[i] < 0){
                b[i+1]--;
                b[i] += 10;
            }
        }
        for (int i = 1; i < n; i++){
            mul();
        }
        l = 129;
        r = 0;
        while (l >= dot && a[l] == 0){
            l--;
        }
        while (r < dot && a[r] == 0){
            r++;
        }
        for (int i = l; i >= r; i--){
            if (i == dot-1) cout << ".";
            cout << a[i];
        }
        cout << "\n";
    }
}
