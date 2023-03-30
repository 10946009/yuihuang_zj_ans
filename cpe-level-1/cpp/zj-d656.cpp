
#include <iostream>
using namespace std;

int main() {
    int n, Case = 1;
    while (cin >> n){
        if (n == 0) break;
        cout << "Case " << Case++ << ": ";
        cout << n / 2 << "\n";
    }
    return 0;
}
