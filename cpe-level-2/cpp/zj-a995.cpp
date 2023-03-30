
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double S;
    while (cin >> S){
        cout << fixed << setprecision(10);
        // r1
        cout << sqrt(3.0) / 2.0 * S;
        // r2
        cout << " " << (2.0 * sqrt(3.0) - 3.0) * S;
        // r3
        cout << " " << sqrt(3.0) / 4.0 * S;
        // r4
        double a = 5.0 / 3.0;
        double b = 7.0 / sqrt(3.0) * S;
        double c = -7.0 / 4.0 * S * S;
        cout << " " << (-b + sqrt(b*b - 4.0*a*c)) / (2.0*a);
        cout << "\n";
    }
    return 0;
}
