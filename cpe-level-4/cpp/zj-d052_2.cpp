
#include <iostream>
#include <cstring>
using namespace std;

int t, n, a[2005], LIS[2005], LDS[2005], ans;

int main(){
    while (cin >> t){
        while (t--){
            cin >> n;
            if (n == 0){
                cout << 0 << "\n";
                continue;
            }
            for (int i = 0; i < n; i++){
                cin >> a[i];
            }
            ans = 0;
            for (int i = n-1; i >= 0; i--){
                LIS[i] = 1;
                LDS[i] = 1;
                for (int j = n-1; j > i; j--){
                    if (a[i] > a[j]) LIS[i] = max(LIS[i], LIS[j] + 1);
                    if (a[i] < a[j]) LDS[i] = max(LDS[i], LDS[j] + 1);
                }
                ans = max(ans, LIS[i] + LDS[i] - 1);
            }
            cout << ans << "\n";
        }
    }
}
