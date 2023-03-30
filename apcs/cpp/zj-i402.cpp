
#include <bits/stdc++.h>
using namespace std;

int n, m, a[1005], b[1005], r[1005], ans;

void f(int x, int y){
    int mx = -10000, now = 0;
    while (x <= n && y <= m){
        now += a[x]*b[y];
        mx = max(mx, now);
        if (now < 0) now = 0;
        x++;
        y++;
    }
    ans = max(ans, mx);
}

void rev_f(int x, int y){
    int mx = -10000, now = 0;
    while (x <= n && y <= m){
        now += a[x]*r[y];
        mx = max(mx, now);
        if (now < 0) now = 0;
        x++;
        y++;
    }
    ans = max(ans, mx);
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++){
        cin >> b[i];
        r[m+1-i] = b[i];
    }
    ans = -10000;
    for (int i = 1; i <= n; i++){
        f(i, 1);
        rev_f(i, 1);
    }
    for (int j = 1; j <= m; j++){
        f(1, j);
        rev_f(1, j);
    }
    cout << ans << "\n";
}
