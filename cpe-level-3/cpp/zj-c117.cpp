
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int dis[8][8], d[8][2] = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
string s, t;

bool check(int x, int y){
    if (0 <= x && x < 8 && 0 <= y && y < 8){
        if (dis[x][y] == -1) return true;
    }
    return false;
}

int main() {
    while (cin >> s >> t){
        pair<int, int> start = {s[0]-'a', s[1]-'1'}, goal = {t[0]-'a', t[1]-'1'};
        memset(dis, -1, sizeof(dis));
        queue <pair<int, int> > q;
        q.push(start);
        dis[start.first][start.second] = 0;
        while (!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();
            for (int i = 0; i < 8; i++){
                if (check(x+d[i][0], y+d[i][1])){
                    q.push({x+d[i][0], y+d[i][1]});
                    dis[x+d[i][0]][y+d[i][1]] = dis[x][y]+1;
                }
            }
            if (dis[goal.first][goal.second] != -1) break;
        }
        cout << "To get from " << s << " to " << t << " takes " << dis[goal.first][goal.second] << " knight moves.\n";
    }
}
