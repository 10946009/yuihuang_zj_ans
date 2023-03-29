
#include <iostream>
using namespace std;

int main() {
    int T, N, M;
    cin >> T;
    while (T--) {
        cin >> N >> M;
        int a[N][M];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> a[i][j];
            }
        }
        bool flag = true;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (a[i][j] != a[N-1-i][M-1-j]) {
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }
        if (flag) cout << "go forward\n";
        else cout << "keep defending\n";
    }
    return 0;
}
