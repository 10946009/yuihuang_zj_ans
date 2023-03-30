
#include <iostream>
using namespace std;

int main() {
    int M, N;
    while (cin >> M >> N) {
        //n - 1 + n * (m - 1)
        cout << M * N - 1 << "\n";
    }
}
