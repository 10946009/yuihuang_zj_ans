
#include <iostream>
using namespace std;

int main() {
    long long n;
    while (cin >> n){
        long long cnt = (1 + n) * (1 + n) / 4;
        cout << ((cnt - 1) * 2 + 1) * 3 - 6 << "\n";
    }
    return 0;
}
