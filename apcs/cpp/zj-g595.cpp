
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n+2];
    h[0] = 105; // -0 ≤ h[i] ≤ 100
    h[n+1] = 105;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (h[i] == 0) {
            ans += max(min(h[i-1], h[i+1]) - h[i], 0);
        }
    }
    cout << ans << "\n";
    return 0;
}

