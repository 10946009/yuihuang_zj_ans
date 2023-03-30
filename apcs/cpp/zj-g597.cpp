
#include <bits/stdc++.h>
using namespace std;

long long n, m, cnt[200005], l, r, w, a[200005], ans;

bool cmp(int x, int y){
    return x > y;
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> l >> r >> w;
        l--;
        r--;
        cnt[l] += w;
        cnt[r+1] -= w;
    }
    for (int i = 1; i < n; i++){
        cnt[i] += cnt[i-1];
    }
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    sort(cnt, cnt+n, cmp);
    for (int i = 0; i < n; i++){
        ans += a[i]*cnt[i];
    }
    cout << ans << "\n";
}
