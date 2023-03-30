
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        long long l = 0, r = 2e9, m;
        while (l <= r) {
            m = (l + r) / 2;
            long long x1 = m * (m + 1) / 2;
            long long x2 = (m + 1) * (m + 2) / 2;
            if (n >= x1 && n < x2) {
                cout << m << "\n";
                break;
            } else if (n < x1) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
    }
    return 0;
}
