
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector <int> g[200];
int color[200];

int main() {
  int n, m, u, v;
  while (cin >> n){
    if (n == 0) break;
    for (int i=0; i<n; i++){
      g[i].clear();
      color[i] = -1;
    }
    cin >> m;
    for (int i=0; i<m; i++){
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    queue <int> q;
    q.push(0);
    color[0] = 0;
    bool BICOLORABLE = true;
    while (!q.empty()){
      int now = q.front(); q.pop();
      for (auto nxt: g[now]){
        if (color[nxt] != -1){
          if (color[nxt] != color[now]) continue;
          else {
            BICOLORABLE = false;
            break;
          }
        } else {
          color[nxt] = color[now] ^ 1;
          q.push(nxt);
        }
      }
      if (!BICOLORABLE) break;
    }
    if (!BICOLORABLE) cout << "NOT BICOLORABLE.\n";
    else cout << "BICOLORABLE.\n";
  }
}
