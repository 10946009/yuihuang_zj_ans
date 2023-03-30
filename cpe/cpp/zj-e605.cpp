
#include <iostream>
#include <cstring>
using namespace std;
char a[105][105];
int b[105][105];
int dx[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};

int main() {
    int n, m, Case = 1;
    string s;
    while (cin >> n >> m){
        if (n == 0 && m == 0) break;
        for (int i = 0; i < n; i++){
            cin >> s;
            for (int j = 0; j < m; j++){
                a[i][j] = s[j];
            }
        }
        memset(b, 0, sizeof(b));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == '*'){
                    b[i][j] = -1;
                } else {
                    for (int k = 0; k < 8; k++){
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '*')
                            b[i][j]++;
                    }
                }
            }
        }
        if (Case > 1) cout << "\n";
        cout << "Field #" << Case++ << ":\n";
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (b[i][j] == -1) cout << '*';
                else cout << b[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
