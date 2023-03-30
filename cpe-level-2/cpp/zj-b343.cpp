
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <int> v[10005];

int main() {
    int T, n, m, l, x, y, z;
    cin >> T;
    while (T--) {
        cin >> n >> m >> l;
        int a[n+1];
        for (int i = 0; i <= n; i++) {
            a[i] = 1;
            v[i].clear();
        }
        for (int i = 1; i <= m; i++) {
            cin >> x >> y;
            v[x].push_back(y);
        }
        queue <int> q;
        for (int i = 1; i <= l; i++) {
            cin >> z;
            q.push(z);
        }
        while (!q.empty()) {
            int now = q.front();
            q.pop();
            if (a[now]) {
                for (auto i : v[now]) {
                    if (a[i]) q.push(i);
                }
            }
            a[now] = 0;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += (a[i] == 0);
        }
        cout << ans << "\n";
    }
    return 0;
}
