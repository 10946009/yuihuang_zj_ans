
#include <iostream>
using namespace std;

int m, n, a[10005], dp[55][10005], l[10005], r[10005];

int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[j];
            if (j == 1) l[j] = dp[i-1][j] + a[j];
            else l[j] = max(dp[i-1][j], l[j-1]) + a[j];
        }
        for (int j = n; j >= 1; j--){
            if (j == n) r[j] = dp[i-1][j] + a[j];
            else r[j] = max(dp[i-1][j], r[j+1]) + a[j];
            dp[i][j] = max(l[j], r[j]);
        }
    }
    int ans = -1e9;
    for (int j = 1; j <= n; j++){
        ans = max(ans, dp[m][j]);
    }
    cout << ans << "\n";
}
