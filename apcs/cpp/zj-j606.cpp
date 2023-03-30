
#include <bits/stdc++.h>
using namespace std;

int k, q, r;
string s[21];

int main(){
    cin >> k >> q >> r;
    cin >> s[0];
    for (int i = 1; i <= q; i++){
        s[i] = s[i-1];
        for (int j = 0, p; j < k; j++){
            cin >> p;
            s[i][p-1] = s[i-1][j];
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 1; j <= q; j++){
            cout << s[j][i];
        }
        cout << "\n";
    }
}
