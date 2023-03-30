
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define INF 0x7FFFFFFF
struct Edge{
    int x, y, w;
};
vector <Edge> edge;
int pa[26];

int str2num(string s){
    int ret = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            ret *= 10;
            ret += s[i] - '0';
        } else {
            break;
        }
    }
    return ret;
}

bool cmp(Edge p, Edge q){
    if (p.w != q.w) return p.w < q.w;
    else if (p.x != q.x) return p.x < q.x;
    else return p.y < q.y;
}

int Find(int x){
    return pa[x] == x ? x : pa[x] = Find(pa[x]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, N;
    string s;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        edge.clear();
        cin >> N;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cin >> s;
                int tmp = str2num(s);
                if (tmp == 0) edge.push_back({i, j, INF});
                else edge.push_back({i, j, tmp});
            }
        }
        sort(edge.begin(), edge.end(), cmp);
        
        for (int i = 0; i < N; i++){
            pa[i] = i; //DSU
        }
        cout << "Case " << Case << ":\n";
        for (Edge e: edge){
            int g1 = Find(e.x);
            int g2 = Find(e.y);
            if (g1 == g2) continue;
            pa[g2] = g1;
            cout << (char)('A' + e.x) << "-" << (char)('A' + e.y) << " " << e.w << "\n";
        }
    }
    return 0;
}
