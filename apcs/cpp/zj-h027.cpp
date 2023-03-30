
#include <iostream>
using namespace std;

int main() {
    int s, t, n, m, r;
    cin >> s >> t >> n >> m >> r;
    int A[s][t], B[n][m];
    int sumA = 0; // A 矩陣的元素總和
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            cin >> A[i][j];
            sumA += A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }
    int ans = 0, mn = 1e6;
    for (int i = 0; i <= n-s; i++) {
        for (int j = 0; j <= m-t; j++) {
            //(i,j): 矩陣B上，子矩陣的左上角
            int dist = 0;
            int sumB = 0; //矩陣B上，子矩陣的元素總和
            for (int k = 0; k < s; k++) {
                for (int l = 0; l < t; l++) {
                    dist += (A[k][l] != B[i+k][j+l]); //元素不同，距離加一
                    sumB += B[i+k][j+l];
                }
            }
            if (dist <= r) {
                ans++;
                mn = min(mn, abs(sumA - sumB));
            }
        }
    }
    if (ans) cout << ans << "\n" << mn << "\n";
    else cout << "0\n-1\n";
    return 0;
}
