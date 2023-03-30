
#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int a[20] = {};
    long long N, N1, N2;
    while (cin >> s){
        int len = s.size();
        N = 0;
        for (int i=0; i<len; i++){
            N *= 10;
            N += s[i] - '0';
        }
        // N1: 比 N 大的完全奇數
        memset(a, 0, sizeof(a));
        for (int i=0; i<len; i++){
            int x = (s[i] - '0');
            if (x % 2 == 0){
                a[i] = x + 1;
                for (int j=i+1; j<len; j++) a[j]=1;
                    break;
            } else {
                a[i] = x;
            }
        }
        N1 = 0;
        for (int i=0; i<len; i++){
            N1 *= 10;
            N1 += a[i];
        }
        // N2: 比 N 小的完全奇數
        memset(a, 0, sizeof(a));
        for (int i=0; i<len; i++){
            int x = (s[i] - '0');
            if (x % 2 == 0){
                if (x == 0) {
                    a[i] = 9;
                    int idx = i - 1;
                    while (idx > 0 && a[idx] == 1){
                        a[idx] = 9;
                        idx--;
                    }
                    a[idx] -= 2;
                    if (a[idx] < 0) a[idx] = 0;
                } else {
                    a[i] = x - 1;
                }
                for (int j=i+1; j<len; j++) a[j]=9;
                    break;
            } else {
                a[i] = x;
            }
        }
        N2 = 0;
        for (int i=0; i<len; i++){
            N2 *= 10;
            N2 += a[i];
        }
        cout << min(N1 - N, N - N2) << '\n';
    }
    return 0;
}
