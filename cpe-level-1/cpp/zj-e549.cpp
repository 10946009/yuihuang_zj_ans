
#include <iostream>
using namespace std;
const int maxn = 1e6;

int main() {
    int n;
    int x, y, z, L;
    while (cin >> n){
        if (n == 0) break;
        int x1 = 0, x2 = maxn;
        int y1 = 0, y2 = maxn;
        int z1 = 0, z2 = maxn;
        for (int i = 0; i < n; i++) {
            cin >> x >> y >> z >> L;
            x1 = max(x1, x);
            x2 = min(x2, x + L);
            y1 = max(y1, y);
            y2 = min(y2, y + L);
            z1 = max(z1, z);
            z2 = min(z2, z + L);
        }
        cout << max(0, x2-x1) * max(0, y2-y1) * max(0, z2-z1) << "\n";
    }
    return 0;
}
