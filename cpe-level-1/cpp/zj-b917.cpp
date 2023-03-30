
#include <iostream>
using namespace std;

int c, n, a[20], mx;
long long mul, ans;

int main() {
    while (cin >> n){
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        ans = 0;
        for (int i = 0; i < n; i++){
            mul = 1;
            for (int j = i; j < n; j++){
                mul *= a[j];
                ans = max(ans, mul);
            }
        }
        c++;
        cout << "Case #" << c << ": The maximum product is " << ans << ".\n\n";
    }
}
