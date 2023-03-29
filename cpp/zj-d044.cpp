
#include <iostream>
using namespace std;
const int maxn = 1000000;
bool num[maxn+5];

void solve(int x) {
    if (x > maxn) return;
    int sum = x;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    if (sum <= maxn) {
        if (!num[sum]) {
            num[sum] = true;
            solve(sum);
        } else {
            return;
        }
    } else {
        return;
    }
}

int main() {
    for (int i = 1; i <= maxn; i++) {
        if (!num[i]) solve(i);
    }
    for (int i = 1; i <= maxn; i++) {
        if (!num[i]) cout << i << "\n";
    }
    return 0;
}
