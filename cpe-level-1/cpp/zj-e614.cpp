
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T, a[3];
    cin >> T;
    while (T--){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if (a[0] + a[1] > a[2]) cout << "OK\n";
        else cout << "Wrong!!\n";
    }
    return 0;
}
