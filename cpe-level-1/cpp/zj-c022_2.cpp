
#include <iostream>
using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    for (int Case = 1; Case <= T; Case++) {
        cin >> a >> b;
        int sum = 0;
        if (a % 2 == 0) {
            a += 1;
        }
        for (int i = a; i <= b; i += 2) {
            sum += i;
        }
        cout << "Case " << Case << ": " << sum << "\n";
    }
    return 0;
}
