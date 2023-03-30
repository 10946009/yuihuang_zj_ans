
#include <iostream>
#include <cstring>
using namespace std;

const int maxn=101;
int m, n;
char a[maxn][maxn];

void flood(int r, int c) {
    int r1, c1;
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i=0; i<8; i++) {
        r1 = r + dx[i];
        c1 = c + dy[i];
        if (r1>=0 && r1<m && c1>=0 && c1<n && a[r1][c1]=='@') {
            a[r1][c1] = '*';
            flood(r1, c1);
        }
    }
}
int main() {
    string s;
    while (cin >> m >> n) {
        if (m==0 && n==0) break;
        memset(a, '\0', sizeof(a));
        for (int i=0; i<m; i++) {
            cin >> s;
            for (int j=0; j<n; j++) {
                a[i][j] = s[j];
            }
        }
        int ans = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (a[i][j] == '@') {
                    ans++;
                    flood(i, j);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
