
#include <iostream>
using namespace std;

long long n, now, ans, a;

int main() {
    while (cin >> n){
        if (n == 0) break;
        cin >> now;
        ans = 0;
        for (int i = 1; i < n; i++){
            ans += abs(now);
            cin >> a;
            now += a;
        }
        cout << ans << "\n";
    }
}
