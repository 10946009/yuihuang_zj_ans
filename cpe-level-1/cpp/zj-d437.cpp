
#include <iostream>
#include <cstring>
using namespace std;

int n, m, a[55];

int main() {
    while (cin >> n){
        memset(a, 0, sizeof(a));
        a[0] = 1;
        for (int i = 1; i <= n; i++){
            cin >> m;
            for (int j = i; j >= 0; j--){
                a[j+1] += a[j] * (-m);
            }
        }
        if (n == 1) cout << "x";
        else cout << "x^" << n;
        for (int i = 1; i < n; i++){
            if (a[i] == 0) continue;
            if (a[i] < 0) cout << " - ";
            else cout << " + ";
            if (abs(a[i]) != 1) cout << abs(a[i]);
            if (n-i == 1) cout << "x";
            else cout << "x^" << n-i;
        }
        if (a[n] < 0) cout << " - ";
        else cout << " + ";
        cout << abs(a[n]) << " = 0\n";
    }
}
