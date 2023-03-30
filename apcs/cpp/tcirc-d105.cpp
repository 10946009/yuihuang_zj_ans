
#include <iostream>
#include <vector>
using namespace std;

const int maxn = 1000005;
int n, m, l[maxn], r[maxn], p[maxn*2], tot[maxn*2];
vector <int> v;

void build(int x){
    if (x >= n) return;
    build(l[x]);
    build(r[x]);
    tot[x] = tot[l[x]] + tot[r[x]];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = n; i < n*2; i++){
        cin >> tot[i];
    }
    for (int i = 0; i < m; i++){
        int q;
        cin >> q;
        v.push_back(q);
    }
    for (int i = 1; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        l[x] = y;
        r[x] = z;
        p[y] = x;
        p[z] = x;
    }
    int root = 0;
    for (int i = 1; i < n; i++){
        if (!p[i]){
            root = i;
            break;
        }
    }
    build(root);
    for (int i:v){
        int now = root;
        while (now < n){
            if (tot[l[now]] <= tot[r[now]]){
                tot[l[now]] += i;
                now = l[now];
            }
            else{
                tot[r[now]] += i;
                now = r[now];
            }
        }
        cout << now << " ";
    }
}
