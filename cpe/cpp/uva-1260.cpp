
#include <iostream>
using namespace std;
int T, n;
int A[1005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> T;
    while (T--) {
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            for (int j = 0; j < i; j++) {
                if (A[j] <= A[i]) {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
