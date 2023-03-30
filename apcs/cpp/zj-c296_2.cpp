
#include <iostream>
using namespace std;

int main() {
    int N, M ,K;
    cin >> N >> M >> K;
    int dp[N];
    //以0-based的編號思考，取模計算較方便
    //總共經過K次爆炸，倒著還原過程
    //第K次爆炸後剩N-K人，幸運者經重新編號為0
    dp[N - K] = 0;
    for (int i = N-K+1; i <= N; i++) {
        //每一次爆炸前，幸運者當下的新編號
        dp[i] = (dp[i-1] + M) % i;
    }
    //改回1-based的編號
    cout << dp[N] + 1 << "\n";
    return 0;
}
