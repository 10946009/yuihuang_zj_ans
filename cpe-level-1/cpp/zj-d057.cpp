
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
bool vis[8][8];

struct Node{
    int x, y, step;
};

int main() {
    int x1, x2, y1, y2;
    while (cin >> x1 >> y1 >> x2 >> y2){
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;
        x1--; y1--; x2--; y2--;
        memset(vis, false, sizeof(vis));
        queue <Node> q;
        q.push({x1, y1, 0});
        while (!q.empty()){
            Node now = q.front();
            q.pop();
            int x = now.x;
            int y = now.y;
            int step = now.step;
            if (x == x2 && y == y2){
                cout << step << "\n";
                break;
            }
            vis[x][y] = true;
            for (int i = 0; i < 8; i++){
                if (vis[i][y] == 0){
                    q.push({i, y, step+1});
                }
            }
            for (int i = 0; i < 8; i++){
                if (vis[x][i] == 0){
                    q.push({x, i, step+1});
                }
            }
            for (int i = -7; i < 8; i++){
                int nx = x + i;
                int ny = y + i;
                if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && vis[nx][ny] == 0){
                    q.push({nx, ny, step+1});
                }
                nx = x - i;
                ny = y + i;
                if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && vis[nx][ny] == 0){
                    q.push({nx, ny, step+1});
                }
            }
        }
    }
    return 0;
}
