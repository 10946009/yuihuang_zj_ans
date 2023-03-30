
#include <iostream>
using namespace std;
const int maxn = 1000001;
//n個貨櫃與n-1個分裝站, n≤1,000,000
//給這2n-1個節點各自一個編號 (從1開始, 第n到第2n-1為貨櫃)
int n, m;
int w[2*maxn]; //weight
int p[2*maxn]; //parent
int L[2*maxn]; //left child
int R[2*maxn]; //right child
int obj[10005]; //1≤m≤10,000

void pull(int i, int delta){
    while (p[i] != 0){
        w[p[i]] += delta;
        i = p[i];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> n >> m;
    
    for (int i=n; i<2*n; i++){
        cin >> w[i];
    }
    
    for (int i=0; i<m; i++){
        cin >> obj[i];
    }
    
    for (int i=0; i<n-1; i++){
        cin >> a >> b >> c;
        L[a] = b;
        R[a] = c;
        p[b] = a;
        p[c] = a;
    }
    for (int i=n; i<2*n; i++){
        pull(i, w[i]);
    }
    int ans[m];
    for (int i=0; i<m; i++){
        //依序進入這個自動分裝系統, 必定由1號分裝站開始
        int now = 1;
        while (now < n){
            int left = L[now];
            int right = R[now];
            if (w[left] <= w[right]){
                now = left;
            } else {
                now = right;
            }
        }
        w[now] += obj[i];
        pull(now, obj[i]);
        ans[i] = now;
    }
    cout << ans[0];
    for (int i=1; i<m; i++){
        cout << ' ' << ans[i];
    }
    cout << '\n';
    return 0;
}
