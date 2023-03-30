
#include <iostream>
#include <vector>
using namespace std;
 
vector <int> g[100005];
int a[100005];
 
void dfs(int now, int pre){
    for (auto i:g[now]){
        if (i != pre){
            a[i] = a[now]+1;
            dfs(i, now);
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n){
        for (int i = 0; i < n; i++){
            g[i].clear();
            a[i] = 0;
        }
        for (int i = 0; i < n-1; i++){
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        dfs(0, -1);
        int idx = 0, mx = 0;
        for (int i = 0; i < n; i++){
            if (a[i] > mx){
                mx = a[i];
                idx = i;
            }
        }
        for (int i = 0; i < n; i++){
            a[i] = 0;
        }
        dfs(idx, -1);
        for (int i = 0; i < n; i++){
            if (a[i] > mx){
                mx = a[i];
            }
        }
        cout << mx << '\n';
    }
}
