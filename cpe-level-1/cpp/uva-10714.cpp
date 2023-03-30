
#include <iostream>
using namespace std;

int main() {
    int T, l, n, x;
    cin >> T;
    while (T--){
        cin >> l >> n;
        pair<int,int> a[n];
        for (int i = 0; i < n; i++){
            cin >> x;
            a[i] = {x, l - x};
        }
        int mn = 0, mx = 0;
        for (int i = 0; i < n; i++){
            mn = max(mn, min(a[i].first, a[i].second));
            mx = max(mx, max(a[i].first, a[i].second));
        }
        cout << mn << " " << mx << "\n";
    }
    return 0;
}
