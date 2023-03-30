
#include <iostream>
using namespace std;

int n, m, a[105][105], ni, nj, mn = 1000000, ans, nxt;
int d[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

bool check(int x, int y){
    if (0 <= x && x < n && 0 <= y && y < m) return true;
    return false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            if (a[i][j] < mn){
                mn = a[i][j];
                ni = i;
                nj = j;
            }
        }
    }
    ans += a[ni][nj];
    a[ni][nj] = -1;
    while (1){
        mn = 1000000;
        nxt = -1;
        for (int i = 0; i < 4; i++){
            if (check(ni+d[i][0], nj+d[i][1]) && a[ni+d[i][0]][nj+d[i][1]] != -1 && a[ni+d[i][0]][nj+d[i][1]] < mn){
                nxt = i;
                mn = a[ni+d[i][0]][nj+d[i][1]];
            }
        }
        if (nxt == -1) break;
        ni += d[nxt][0];
        nj += d[nxt][1];
        ans += a[ni][nj];
        a[ni][nj] = -1;
    }
    cout << ans << "\n";
}
