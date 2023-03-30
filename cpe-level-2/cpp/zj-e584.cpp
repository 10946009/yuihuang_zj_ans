
#include <iostream>
#include <cstring>
using namespace std;
#define pii pair<int,int>
#define F first
#define S second
int M, N, X, Y, land_size;
char g[25][25], land_mark;
int vis[25][25];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y){
    vis[x][y] = 1;
    land_size++;
    for (int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        //地球是圓的，所以地圖最左區域(x, 0)和最右區域(x, N-1)相連。
        if (ny > N-1) ny = 0;
        if (ny < 0) ny = N-1;
        if (nx >= 0 && nx < M && ny >= 0 && ny < N && g[nx][ny] == land_mark && !vis[nx][ny]){
            dfs(nx, ny);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while (cin >> M >> N && M+N){
        for (int i = 0; i < M; i++){
            cin >> s;
            for (int j = 0; j < N; j++){
                vis[i][j] = 0;
                g[i][j] = s[j];
            }
        }
        cin >> X >> Y;
        land_size = 0;
        //找出代表土地的符號
        land_mark = g[X][Y];
        dfs(X, Y);
        int mx = 0;
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                if (g[i][j] == land_mark && !vis[i][j]){
                    land_size = 0;
                    dfs(i, j);
                    mx = max(mx, land_size);
                }
            }
        }
        cout << mx << "\n";
    }
    return 0;
}

