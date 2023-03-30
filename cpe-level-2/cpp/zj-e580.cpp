
#include <iostream>
using namespace std;

int n, m, ans;

int main(){
    while(cin >> n >> m){
        if (n == 0 && m == 0) break;
        if (min(n, m) == 1){
            cout << max(n, m) << " knights may be placed on a " << n << " row " << m << " column board.\n";
        }
        else if (min(n, m) == 2){
            ans = (max(n, m)/4) * 2;
            ans += min(max(n, m)%4, 2);
            ans *= 2;
            cout << ans << " knights may be placed on a " << n << " row " << m << " column board.\n";
        }
        else{
            ans = (n*m)/2;
            if (n % 2 == 1 && m % 2 == 1) ans++;
            cout << ans << " knights may be placed on a " << n << " row " << m << " column board.\n";
        }
    }
}
