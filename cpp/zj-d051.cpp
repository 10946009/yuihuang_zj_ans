
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double F;
    cin >> F;
    cout << fixed;
    cout << setprecision(3) << (F - 32) * 5 / 9 << "\n";
    return 0;
}
