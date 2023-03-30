
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const int maxn = 1000005;
int n, p, l, r, a[maxn], d[maxn], now, nxt;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> n >> p >> l >> r) {
        for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] >= n || a[i] < 0) a[i] = n;
    }
    memset(d, -1, sizeof(d));
    d[0] = 0;
    queue <int> q;
    q.push(0);
    while (!q.empty() && d[p] == -1){
        now = q.front();
        q.pop();
        nxt = now - l;
        if (nxt >= 0 && a[nxt] != n && d[a[nxt]] == -1){
            d[a[nxt]] = d[now] + 1;
            q.push(a[nxt]);
        }
        nxt = now + r;
        if (nxt < n && a[nxt] != n && d[a[nxt]] == -1){
            d[a[nxt]] = d[now] + 1;
            q.push(a[nxt]);
        }
    }
    cout << d[p] << "\n";
    }
    return 0;
}
