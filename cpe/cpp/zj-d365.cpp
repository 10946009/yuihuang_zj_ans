
#include <iostream>
#include <queue>
using namespace std;
#define pii pair<int,int>
#define F first
#define S second
const int maxn = 500;
char a[maxn][maxn];
int H, W, remain;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int cnt[26];

void bfs(int x, int y){
    queue <pii> q;
    q.push({x, y});
    char target = a[x][y];
    a[x][y] = '0';
    while (!q.empty()){
        pii now = q.front();
        q.pop();
        x = now.F;
        y = now.S;
        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < H && ny >= 0 && ny < W && a[nx][ny] == target){
                q.push({nx, ny});
                a[nx][ny] = '0';
            }
        }
    }
    cnt[target - 'a']++;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    string s;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> H >> W;
        for (int i = 0; i < H; i++){
            cin >> s;
            for (int j = 0; j < W; j++){
                a[i][j] = s[j];
            }
        }
        for (int i = 0; i < 26; i++) cnt[i] = 0;
        while (1){
            int x = 0, y = 0;
            bool flag = false;
            for (int i = 0; i < H; i++){
                for (int j = 0; j < W; j++){
                    if (a[i][j] != '0'){
                        x = i;
                        y = j;
                        flag = true;
                        break;
                    }
                }
                if (flag) break;
            }
            if (flag) bfs(x, y);
            else break;
        }
        int mx = 0;
        for (int i = 0; i < 26; i++){
            mx = max(mx, cnt[i]);
        }
        cout << "World #" << Case << "\n";
        while (mx){
            for (int i = 0; i < 26; i++){
                if (cnt[i] == mx){
                    cout << (char)('a'+i) << ": " << cnt[i] << "\n";
                }
            }
            mx--;
        }
    }
    return 0;
}

