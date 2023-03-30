
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, x, y;
    while (cin >> N){
        if (N == 0) break;
        int sq = sqrt((double)N);
        if (sq * sq == N){
            // 完全平方數
            x = 1;
            y = sq;
        } else {
            int mid = sq * sq + sq;
            x = sq + 1;
            y = sq + 1;
            if (N > mid){
                y -= (N - mid - 1);
            } else {
                x -= (mid - N + 1);
            }
        }
        if (sq % 2 == 0) swap(x, y);
        cout << x << " " << y << "\n";
    }
    return 0;
}
