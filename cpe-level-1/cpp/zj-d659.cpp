
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    int a[3];
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        cout << "Case " << Case << ": " << a[1] << "\n";
    }
    return 0;
}
