
#include <iostream>
using namespace std;

int main() {
    int N, e, f, c;
    cin >> N;
    while (N--){
        cin >> e >> f >> c;
        int ans = (e + f) / c;
        e = (e + f) % c + (e + f) / c;
        while (e >= c) {
            ans += e / c;
            e = e / c + e % c;
        }
        cout << ans << "\n";
    }
    return 0;
}
