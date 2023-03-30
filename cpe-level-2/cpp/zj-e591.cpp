
#include <iostream>
using namespace std;

int main() {
    int T, n;
    cin >> T;
    while (T--){
        cin >> n;
        int cur, pre = 0, sum = 0, ans = 0;
        for (int i = 0; i < n; i++){
            cin >> cur;
            if (sum >= cur){
                sum = sum - pre + cur;
            } else {
                sum += cur;
                ans++;
            }
            pre = cur;
        }
        cout << ans << "\n";
    }
    return 0;
}
