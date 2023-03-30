
#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N){
        if (N == -1) break;
        long long F = 1, M = 0;
        for (int i = 1; i <= N; i++){
            long long tmp = M;
            M += F;
            F = tmp + 1;
        }
        cout << M << " " << M + F << "\n";
    }
}
