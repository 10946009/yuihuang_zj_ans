
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
#define pii pair<int,int>
#define F first
#define S second
const int maxn = 105;
int g[maxn][maxn];

int main() {
    int w, h, n, x, y;
    while (cin >> w >> h && w+h){
        memset(g, 0, sizeof(g));
        cin >> n;
        while (n--){
            cin >> x >> y;
            g[x][y] = -1;
        }
        g[0][0] = 1;
        for (int i = 0; i <= w; i++){
            for (int j = 0; j <= h; j++){
                if (g[i][j] == -1) continue;
                if (i && g[i-1][j] != -1){
                    g[i][j] += g[i-1][j];
                }
                if (j && g[i][j-1] != -1){
                    g[i][j] += g[i][j-1];
                }
            }
        }
        
        if (g[w][h] <= 0) cout << "There is no path.\n";
        else if (g[w][h] == 1) cout << "There is one path from Little Red Riding Hood's house to her grandmother's house.\n";
        else cout << "There are " << g[w][h] << " paths from Little Red Riding Hood's house to her grandmother's house.\n";
    }
    return 0;
}
