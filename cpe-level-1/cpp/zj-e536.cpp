
#include <iostream>
#include <algorithm>
using namespace std;
int a[1005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, x, Case = 1;
    while (cin >> n){
        if (n == 0) break;
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        
        cout << "Case " << Case++ << ":\n";
        cin >> m;
        while (m--){
            cin >> x;
            int ans = a[0] + a[1];
            int delta = abs(ans - x);
            for (int i = 0; i < n; i++){
                for (int j = i+1; j < n; j++){
                    if (abs(a[i] + a[j] - x) < delta){
                        ans = a[i] + a[j];
                        delta = abs(a[i] + a[j] - x);
                    } else if (a[i] + a[j] - x > delta){
                        break;
                    }
                }
            }
            cout << "Closest sum to " << x << " is " << ans << ".\n";
        }
    }
    return 0;
}
