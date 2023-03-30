
#include <iostream>
using namespace std;

int main() {
    int t, a0, a1, a2, a3, a4;
    cin >> t;
    while (t--){
        cin >> a0 >> a1 >> a2 >> a3;
        if (a3 - a2 == a2 - a1){
            a4 = a3 + a3 - a2;
        } else {
            a4 = a3 * (a3 / a2);
        }
        cout << a0 << " " << a1 << " " << a2 << " " << a3 << " " << a4 << "\n";
    }
    return 0;
}
