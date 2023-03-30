
#include <iostream>
#include <cstring>
using namespace std;
#define INF 0x3F3F3F3F
const int maxn = 101;
int dis[maxn][maxn];

int main() {
    int T, N, R, u, v, s, d;
    int Case = 1;
    cin >> T;
    while (T--) {
        cin >> N >> R;
        memset(dis, 0x3F, sizeof(dis));
        for (int i=0; i<R; i++) {
            cin >> u >> v;
            dis[u][v] = 1;
            dis[v][u] = 1;
        }
        for (int i=0; i<N; i++) {
            dis[i][i] = 0;
        }
        for (int k=0; k<N; k++) {
            for (int i=0; i<N; i++) {
                for (int j=0; j<N; j++) {
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
        cin >> s >> d;
        int maxi = 0;
        for (int k=0; k<N; k++) {
            maxi = max(maxi, dis[s][k] + dis[k][d]);
        }
        cout << "Case " << Case++ << ": " << maxi << '\n';
    }
    
    return 0;
}
