
#include <iostream>
using namespace std;

int func(int x){
    if (x == 1) return 1;
    if (x % 2 == 0){
        return 2 * func(x/2);
    } else {
        return 2 * (func((x+1)/2) - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n && n){
        cout << func(n) << "\n";
    }
    return 0;
}
