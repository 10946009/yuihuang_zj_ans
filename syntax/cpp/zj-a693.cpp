
#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            int l, r;
            cin >> l >> r;
            l--; //改成 0-based
            r--; //改成 0-based
            int sum = 0;
            for (int j = l; j <= r; j++) {
                sum += a[j];
            }
            cout << sum << "\n";
        }
    }
    
    return 0;
}
