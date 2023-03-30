
#include <iostream>
using namespace std;

int high[10005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int L, H, R;
    int mn = 10000, mx = 0;
    while (cin >> L >> H >> R){
        mn = min(mn, L);
        mx = max(mx, R);
        for (int i = L; i < R; i++){
            high[i] = max(high[i], H);
        }
    }
    H = -1;
    for (int i = mn; i <=mx; i++){
        if (high[i] != H) {
            cout << i << " " << high[i] << " ";
            H = high[i];
        }
    }
    cout << "\n";
}
