
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    long long a[3];
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        cout << "Case " << Case << ": ";
        if (a[0] <= 0) {
            cout << "Invalid\n";
        } else if (a[0] == a[2]){
            cout << "Equilateral\n";
        } else if (a[0] == a[1] || a[1] == a[2]){
            cout << "Isosceles\n";
        } else {
            if (a[0] + a[1] > a[2]) cout << "Scalene\n";
            else cout << "Invalid\n";
        }
    }
    return 0;
}
