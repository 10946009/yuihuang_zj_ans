
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, m, q, b, c, d, casecnt = 0;
    while (cin >> n >> m >> q){
        if (n == 0) break;
        int a[n][n];
        memset(a, 0x7F, sizeof(a));
        for (int i = 0; i < m; i++){
            cin >> b >> c >> d;
            b--;
            c--;
            a[b][ c] = d;
            a[ c][b] = d;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                for (int k = 0; k < n; k++){
                    if (max(a[j][i], a[i][k]) < a[j][k]){
                        a[j][k] = max(a[j][i], a[i][k]);
                    }
                }
            }
        }
        casecnt++;
        if (casecnt != 1) cout << "\n";
        cout << "Case #" << casecnt << "\n";
        for (int i = 0; i < q; i++){
            cin >> b >> c;
            b--;
            c--;
            if (a[b][ c] == 0x7F7F7F7F) cout << "no path\n";
            else cout << a[b][ c] << "\n";
        }
    }
}
