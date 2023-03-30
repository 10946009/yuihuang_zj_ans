
#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000005], l[1000005], ans;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    set <int> st;
    l[n] = n;
    st.insert(a[n]);
    while (l[n]-1 >= 1 && !st.count(a[l[n]-1])){
        l[n]--;
        st.insert(a[l[n]]);
    }
    for (int i = n-1; i >= 1; i--){
        st.erase(a[i+1]);
        l[i] = l[i+1];
        while (l[i]-1 >= 1 && !st.count(a[l[i]-1])){
            l[i]--;
            st.insert(a[l[i]]);
        }
    }
    int dp[2][n+1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= k; i++){
        memset(dp[i%2], 0, sizeof(dp[i%2]));
        for (int j = 1; j <= n; j++){
            dp[i%2][j] = max(dp[i%2][j-1], dp[(i-1)%2][l[j]-1]+(j-l[j]+1));
        }
        ans = max(ans, dp[i%2][n]);
    }
    cout << ans << "\n";
}
