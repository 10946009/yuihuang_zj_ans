
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    double n, m;
    cin >> T;
    while (T--){
        cin >> n >> m;
        cout << (int)ceil((n-2)/3) * (int)ceil((m-2)/3) << endl;
    }
    return 0;
}
