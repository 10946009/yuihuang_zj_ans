
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int n, m, root, dp[1005][85][5], ans, inf = 1e9;
string s[1005];
vector <int> v[1005];
map <char, int> mp = {{'@', 0}, {'A', 1}, {'U', 2}, {'C', 3}, {'G', 4}};

void f(int now, int pos){
    if (v[now].empty()){
        if (s[now][pos] == '@') return;
        for (int i = 0; i <= 4; i++){
            dp[now][pos][i] = inf;
        }
        dp[now][pos][0] = dp[now][pos][mp[s[now][pos]]] = 0;
        return;
    }
    for (auto i:v[now]){
        f(i, pos);
    }
    int c = mp[s[now][pos]];
    if (c != 0){
        for (int i = 0; i <= 4; i++){
            dp[now][pos][i] = inf;
        }
        dp[now][pos][c] = 0;
        for (auto i:v[now]){
            dp[now][pos][c] += min(dp[i][pos][0]+1, dp[i][pos][c]);
        }
        dp[now][pos][0] = dp[now][pos][c];
        return;
    }
    for (c = 1; c <= 4; c++){
        for (auto i:v[now]){
            dp[now][pos][c] += min(dp[i][pos][0]+1, dp[i][pos][c]);
        }
    }
    dp[now][pos][0] = min(min(dp[now][pos][1], dp[now][pos][2]), min(dp[now][pos][3], dp[now][pos][4]));
}

int main() {
    cin >> n >> m;
    for (int i = 0, a, b; i < n; i++){
        cin >> a >> b;
        cin >> s[a];
        if (a == b) root = a;
        else v[b].push_back(a);
    }
    for (int i = 0; i < m; i++){
        f(root, i);
        ans += dp[root][i][0];
    }
    cout << ans << "\n";
}
