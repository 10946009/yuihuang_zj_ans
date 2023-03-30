
#include <bits/stdc++.h>
using namespace std;

int n, k, re[100], nxt[100];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        memset(re, 0, sizeof(re));
        re[0] = 1;
        bool flag = false;
        for (int i = 0, a; i < n; i++){
            cin >> a;
            if (flag) continue;
            a %= k;
            for (int j = 0; j < k; j++){
                if (!re[j]) continue;
                nxt[(j+a+k)%k] = 1;
                nxt[(j-a+k)%k] = 1;
            }
            flag = true;
            for (int i = 0; i < k; i++){
                re[i] = nxt[i];
                if (!nxt[i]) flag = false;
                else nxt[i] = 0;
            }
        }
        if (re[0]) cout << "Divisible\n";
        else cout << "Not divisible\n";
    }
}
