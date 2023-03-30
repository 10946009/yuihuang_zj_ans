
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    int a[4];
    cin >> T;
    while (T--){
        for (int i = 0; i < 4; i++){
            cin >> a[i];
        }
        sort(a, a+4);
        if (a[0] == a[3]) cout << "square\n";
        else if (a[0] == a[1] && a[2] == a[3]) cout << "rectangle\n";
        else {
            if (a[0] + a[1] + a[2] > a[3]) cout << "quadrangle\n";
            else cout << "banana\n";
        }
    }
    return 0;
}
