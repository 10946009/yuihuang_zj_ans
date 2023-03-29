
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int x, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        if (sum > 59 * n) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
    return 0;
}
