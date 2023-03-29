
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c == 0){
        int x = -b / (2 * a);
        cout << "Two same roots x=" << x << "\n";
    } else if (b * b - 4 * a * c > 0){
        int x = -b;
        int y = sqrt(b * b - 4 * a * c);
        cout << "Two different roots x1=" << (x + y) / (2 * a) << " , x2=" << (x - y) / (2 * a) << "\n";
    } else {
        cout << "No real root\n";
    }
    return 0;
}
