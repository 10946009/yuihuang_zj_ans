
#include <iostream>
using namespace std;
const int maxn = 50000+5;
int pa[maxn];

int Find(int x){
    return pa[x] == x ? x : pa[x] = Find(pa[x]);
}

bool Union(int x, int y){
    int g1 = Find(x);
    int g2 = Find(y);
    if (g1 == g2) return false;
    else{
        pa[g2] = g1;
        return true;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, x, y, Case = 1;
    while (cin >> n >> m && n+m){
        for (int i = 0; i < maxn; i++){
            pa[i] = i;
        }
        int ans = n;
        while (m--){
            cin >> x >> y;
            if (Union(x, y)) {
                ans--;
            }
        }
        cout << "Case " << Case++ << ": ";
        cout << ans << "\n";
    }
    return 0;
}
