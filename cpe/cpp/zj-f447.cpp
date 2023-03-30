
#include <iostream>
using namespace std;

long long t, n, m;

int main() {
    cin >> t;
    while (t--){
        cin >> n >> m;
        cout << ((m-1)+(m-n))*n/2 << "\n";
    }
}
