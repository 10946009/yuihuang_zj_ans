
#include <iostream>
using namespace std;

int main() {
    int T, n, m;
    cin >> T;
    while (T--){
        cin >> n >> m;
        int ans = 0;
        while (n >= m){
            ans += n / m;
            if (n == m) n = 0;
            else n = n / m + n % m;
        }
        if (n == 0) cout << ans << "\n";
        else cout << "cannot do this\n";
    }
    return 0;
}
