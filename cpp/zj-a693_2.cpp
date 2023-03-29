
#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int x, ps[n+1];
        ps[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            ps[i] = ps[i-1] + x; //前綴和
        }
        for (int i = 0; i < m; i++) {
            int l, r;
            cin >> l >> r;
            cout << ps[r] - ps[l-1] << "\n";
        }
    }
    
    return 0;
}
