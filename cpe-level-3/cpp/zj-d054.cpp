
#include <iostream>
using namespace std;

long long t, n, dp[45][4];

int main() {
    cin >> t;
    dp[1][0] = 1;
    dp[1][3] = dp[1][0]+dp[1][1]+dp[1][2];
    for (int i = 2; i <= 40; i++){
        dp[i][0] = dp[i-1][3];
        dp[i][1] = dp[i-1][0]*2;
        dp[i][2] = dp[i-1][0]*2+dp[i-1][1];
        dp[i][3] = dp[i][0]+dp[i][1]+dp[i][2];
    }
    while (t--){
        cin >> n;
        cout << dp[n][3] << "\n";
    }
}
