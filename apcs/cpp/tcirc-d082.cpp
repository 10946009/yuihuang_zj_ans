
#include <iostream>
#include <algorithm>
using namespace std;
int R, C, ans;
int a[26][26];
int dp[26][26][26][26];
 
int del_line(int x1, int y1, int x2, int y2){
    int zeros = 0, ones = 0;
    for (int i=x1; i<=x2; i++){
        for (int j=y1; j<=y2; j++){
            zeros += (a[i][j] == 0);
            ones += (a[i][j] == 1);
        }
    }
    return min(zeros, ones);
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> R >> C) {
        for (int i=0; i<R; i++){
        for (int j=0; j<C; j++){
            cin >> a[i][j];
        }
    }
    for (int rows=1; rows<R; rows++){
        for (int cols=1; cols<C; cols++){
            for (int i=0; i+rows<R; i++){
                for (int j=0; j+cols<C; j++){
                    dp[i][j][i+rows][j+cols] = min({
                        dp[i+1][j][i+rows][j+cols] + del_line(i, j, i, j+cols),
                        dp[i][j+1][i+rows][j+cols] + del_line(i, j, i+rows, j),
                        dp[i][j][i+rows-1][j+cols] + del_line(i+rows, j, i+rows, j+cols),
                        dp[i][j][i+rows][j+cols-1] + del_line(i, j+cols, i+rows, j+cols)
                    });
                }
            }
        }
    }
    cout << dp[0][0][R-1][C-1] << '\n';
    }
    return 0;
}
