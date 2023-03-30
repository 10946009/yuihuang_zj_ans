
#include <iostream>
#include <stack>
using namespace std;
const int maxn = 100005;
int H[maxn], C[maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, L;
    cin >> N >> L;
    C[0] = 0;
    H[0] = 2e9;
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> H[i];
    }
    C[N+1] = L;
    H[N+1] = 2e9;
    stack<int> stk;
    stk.push(0);
    int ans = 0, mx = 0;
    for (int i = 1; i <= N; i++) {
        while (C[stk.top()] + H[stk.top()] <= C[i]) {
            ans++;
            mx = max(mx, H[stk.top()]);
            stk.pop();
        }
        if (C[stk.top()] <= C[i] - H[i] || C[i] + H[i] <= C[i+1]) {
            //向左倒下 || 向右倒下
            ans++;
            mx = max(mx, H[i]);
        } else {
            stk.push(i);
        }
    }
    while (C[stk.top()] + H[stk.top()] < L) {
        ans++;
        mx = max(mx, H[stk.top()]);
        stk.pop();
    }
    cout << ans << "\n";
    cout << mx << "\n";
    return 0;
}
