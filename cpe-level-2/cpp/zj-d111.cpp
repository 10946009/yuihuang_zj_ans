
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    while (cin >> n){
        if (n == 0) break;
        int sq = sqrt(n);
        if (sq * sq == n) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
