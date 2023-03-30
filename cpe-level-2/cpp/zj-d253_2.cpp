
#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 7500;
int N = 5; // types of coins
int coin[] = {1, 5, 10, 25, 50};
long long dp[maxn];

int main() {
    int n;
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i=0; i<N; i++) {
        for (int j=coin[i]; j<maxn; j++) {
            dp[j] = dp[j] + dp[j-coin[i]];
        }
    }
    
    while (cin >> n) {
        cout << dp[n] << "\n";
    }
    return 0;
}
