
#include <iostream>
using namespace std;
int n, P, a[26];
int mx;

void solve(int i, int sum) {
    if (i >= n) {
        if (sum <= P) {
            mx = max(mx, sum);
        }
        return;
    }
    solve(i + 1, sum + a[i]); //計入a[i]
    solve(i + 1, sum); //不計a[i]
}

int main() {
    cin >> n >> P;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mx = 0;
    solve(0, 0);
    cout << mx << "\n";
    return 0;
}
