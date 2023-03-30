
#include <iostream>
using namespace std;

int myGCD(int x, int y){
    while ((x%=y) && (y%=x));
    return x+y;
}

int main() {
    int T, n, k;
    cin >> T;
    while (T--){
        cin >> n >> k;
        string m[n];
        int f[n];
        for (int i = 0; i < n; i++){
            cin >> m[i] >> f[i];
        }
        int D = f[0];
        for (int i = 1; i < n; i++){
            D = myGCD(D, f[i]);
        }
        int Time = D, cnt = 0;
        while (cnt < k){
            for (int i = 0; i < n && cnt < k; i++){
                if (Time % f[i] == 0){
                    cout << Time << " " << m[i] << "\n";
                    cnt++;
                }
            }
            Time += D;
        }
    }
    return 0;
}
