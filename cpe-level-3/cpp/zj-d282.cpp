
#include <iostream>
#include <map>
#include <string>
using namespace std;

map <int, string> mp;
int n, m;
int cnt = 0;
int a[25][25];

int main() {
    while (cin >> n >> m){
        if (n == 0) break;
        cnt++;
        mp.clear();
        string str;
        for (int i = 0; i < n+1; i++){
            for (int j = 0; j < n+1; j++){
                if (i == j) a[i][j] = 0;
                else a[i][j] = 1e9;
            }
        }
        for (int i = 0; i < n; i++){
            cin >> str;
            mp[i+1] = str;
        }
        int x, y, z;
        for (int i = 0; i < m; i++){
            cin >> x >> y >> z;
            a[x][y] = z;
            a[y][x] = z;
        }
        for (int i = 1; i < n+1; i++){
            for (int j = 1; j < n+1; j++){
                for (int k = 1; k < n+1; k++){
                    if (a[j][i] + a[i][k] < a[j][k]){
                        a[j][k] = a[j][i] + a[i][k];
                    }
                }
            }
        }
        int mn = 1e9, idx, ans;
        for (int i = 1; i < n+1; i++){
            ans = 0;
            for (int j = 1; j < n+1; j++){
                ans += a[i][j];
            }
            if (ans < mn){
                mn = ans;
                idx = i;
            }
        }
        printf("Case #%d : %s\n", cnt, mp[idx].c_str());
    }
}
