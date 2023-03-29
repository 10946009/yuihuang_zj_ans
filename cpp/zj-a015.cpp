
#include <iostream>
using namespace std;

int main() {
    int R, C;
    int a[100][100];
    while (cin >> R >> C) {
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                cin >> a[i][j];
            }
        }
            
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < R; j++) {
                cout << a[j][i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
