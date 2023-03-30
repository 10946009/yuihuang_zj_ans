
#include <iostream>
#include <queue>
using namespace std;
#define pii pair<int,int>
#define F first
#define S second
int a[100][100];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int main() {
    int T, R, C, r0, c0;
    string s;
    cin >> T;
    while (T--){
        cin >> r0 >> c0;
        r0--; c0--;
        getline(cin, s); // clear buffer
        R = 0;
        while (getline(cin, s) && s.size()){
            C = (int)s.size();
            for (int i = 0; i < C; i++)
                a[R][i] = s[i];
            R++;
        }
        queue <pii> q;
        q.push({r0, c0});
        a[r0][c0] = '*';
        int ans = 0;
        while (!q.empty()){
            pii now = q.front(); q.pop();
            ans++;
            for (int i = 0; i < 4; i++){
                int r = now.F + dx[i];
                int c = now.S + dy[i];
                if (r >= 0 && r < R && c >= 0 && c < C && a[r][c] == '0'){
                    a[r][c] = '*';
                    q.push({r, c});
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

