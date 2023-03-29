
#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2){
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;

        int ans = h2 * 60 + m2 - h1 * 60 - m1;
        if (ans < 0) ans += 1440;

        cout << ans << "\n";
    }
    return 0;
}
