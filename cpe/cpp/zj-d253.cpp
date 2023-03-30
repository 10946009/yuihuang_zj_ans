
#include <iostream>
#include <cstring>
using namespace std;
int coins[] = {1, 5, 10, 25, 50};
int dp[5][7500];

int ways(int idx, int money){
    if (idx == 5 || money < 0) return 0;
    if (money == 0) return 1;
    if (dp[idx][money] != -1) return dp[idx][money];
    int ret = 0;
    for (int i = idx; i < 5; i++){
        if (money >= coins[i]){
            ret += ways(i, money - coins[i]);
        }
    }
    return dp[idx][money] = ret;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    memset(dp, -1, sizeof(dp));
    while (cin >> n){
        cout << ways(0, n) << "\n";
    }
    return 0;
}
