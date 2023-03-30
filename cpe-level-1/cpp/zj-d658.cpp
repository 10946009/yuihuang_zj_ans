
#include <iostream>
using namespace std;

int main() {
    int T=1, N, times=1, copies=2;
    
    while (cin >> N) {
        if (N < 0) break;
        // 2^N - 1 copies vs. N-1 wanted
        while (copies < N) {
            times++;
            copies *= 2;
        }
        if (N <= 1)
            cout << "Case " << T++ << ": " << 0 << '\n';
        else
            cout << "Case " << T++ << ": " << times << '\n';
    }
    return 0;
}
