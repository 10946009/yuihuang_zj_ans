
#include <iostream>
using namespace std;
 
int main() {
    int Z, I, M, L, Case = 1;
    while (cin >> Z >> I >> M >> L) {
        if (Z + I + M + L == 0) break;
        int a[M]; //a[i]: 數字 i 上一次出現的序位
        for (int i = 0; i < M; i++) {
            a[i] = 0; //數字 i 還沒出現過
        }
        int rank = 1;
        while (!a[L]) {
            a[L] = rank;
            L = (Z * L + I) % M;
            rank++;
        }
        cout << "Case " << Case++ << ": " << rank - a[L] << "\n";
    }
    return 0;
}
