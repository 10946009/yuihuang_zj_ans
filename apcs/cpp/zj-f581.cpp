
#include <iostream>
#include <vector>
using namespace std;

int n, m, p[200005];
vector <int> pre;

int main() {
    cin >> n >> m;
    for (int i = 0, tot = 0; i < n; i++){
        cin >> p[i];
        tot += p[i];
        pre.push_back(tot);
    }
    int s = 0;
    for (int i = 0, q; i < m; i++){
        cin >> q;
        if (s != 0) q += pre[s-1];
        if (q > pre[n-1]) q -= pre[n-1];
        s = (int)(lower_bound(pre.begin(), pre.end(), q)-pre.begin())+1;
        s %= n;
    }
    cout << s << "\n";
}
