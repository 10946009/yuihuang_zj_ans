
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m;
    while (cin >> n && n){
        if (n % m) cout << m - (n % m) << "\n";
        else cout << n / m << "\n";
    }
    return 0;
}
