
#include <bits/stdc++.h>
using namespace std;

int t, p[2005], cnt[123];
string s;

int main(){
    p[0] = p[1] = 1;
    for (int i = 2; i <= 2000; i++){
        if (p[i] == 1) continue;
        for (int j = i*2; j <= 2000; j += i){
            p[j] = 1;
        }
    } //p[i] = 0 if i is prime, 0 if i is not prime
    cin >> t;
    for (int Case = 1; Case <= t; Case++){
        cin >> s;
        for (int i = 0; i <= 122; i++){
            cnt[i] = 0;
        }
        for (int i = 0; i < s.length(); i++){
            cnt[(int)(s[i])]++;
        }
        cout << "Case " << Case << ": ";
        bool flag = false;
        for (int i = 0; i <= 122; i++){ //ascii code of 'z':122
            if (p[cnt[i]] == 0){
                flag = true;
                cout << (char)i;
            }
        }
        if (!flag) cout << "empty";
        cout << "\n";
    }
}
