
#include <iostream>
#include <cstring>
using namespace std;
int n, M, S, x;
int dp[2][200005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> M >> S;
    memset(dp, 0, sizeof(dp));
    int sum = 0, idx = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        idx = i % 2;
        for (int j = 0; j <= M - S; j++) {
            if (j < x) {
                dp[idx^1][j] = dp[idx][j];
            } else {
                dp[idx^1][j] = max(dp[idx][j], dp[idx][j - x] + x);
            }
        }
    }
    cout << sum - dp[idx^1][M-S] << "\n";
    return 0;
}
