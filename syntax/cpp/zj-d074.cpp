
#include <iostream>
using namespace std;

int main() {
    int n, m, mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m > mx) mx = m;
    }
    cout << mx << "\n";
    return 0;
}
