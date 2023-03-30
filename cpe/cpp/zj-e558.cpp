
#include <iostream>
using namespace std;

int t, n, a[100055];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i <= 100000; i++){
        int m = i, add = 0;
        while (m){
            add += m % 10;
            m /= 10;
        }
        if (!a[i+add]) a[i+add] = i;
    }
    cin >> t;
    while (t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}
