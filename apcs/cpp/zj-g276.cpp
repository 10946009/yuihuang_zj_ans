
#include <iostream>
using namespace std;

struct Demon{
    bool valid; //魔王是否仍存在
    int x, y, s, t;
} demon[505];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    bool b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0; //紀錄棋盤炸彈數目
            b[i][j] = false; //紀錄是否引爆
        }
    }
    for (int i = 0; i < k; i++) {
        cin >> demon[i].x >> demon[i].y >> demon[i].s >> demon[i].t;
        demon[i].valid = true;
    }
    int counter = k;
    while (counter) {
        //每個魔王移動前會在所在位置上放下一顆炸彈
        for (int i = 0; i < k; i++) {
            if (demon[i].valid) {
                a[demon[i].x][demon[i].y]++;
            }
        }

        //魔王移動
        for (int i = 0; i < k; i++) {
            if (demon[i].valid) {
                demon[i].x += demon[i].s;
                demon[i].y += demon[i].t;
                if ((demon[i].x < 0 || demon[i].x >= n) || (demon[i].y < 0 || demon[i].y >= m)) {
                    //魔王移動超出整個棋盤的範圍，則被視為消失
                    demon[i].valid = false;
                    counter--;
                } else if (a[demon[i].x][demon[i].y]) {
                    //魔王移動到已經被放有炸彈的位置，炸彈則會被引爆
                    b[demon[i].x][demon[i].y] = true;
                    demon[i].valid = false;
                    counter--;
                }
            }
        }
        //引爆
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (b[i][j]) {
                    a[i][j] = 0;
                    b[i][j] = false;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans += (a[i][j] > 0); //剩下幾格有炸彈
        }
    }
    cout << ans << "\n";
    return 0;
}

