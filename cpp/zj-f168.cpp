
#include <iostream>
using namespace std;
int N, total;
int v[17];
int ans[3], cnt;

void solve(int d) {
    if (d >= N) {
        if (ans[0] == ans[1] && ans[1] == ans[2]) {
            cnt++;
        }
        return;
    }
    for (int i = 0; i < 3; i++) {
        if (ans[i] + v[d] <= total) {
            ans[i] += v[d];
            solve(d+1);
            ans[i] -= v[d];
        }
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        total += v[i];
    }
    if (total % 3) {
        cout << "NO\n";
        return 0;
    }
    total /= 3;
    solve(0);
    if (cnt) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
