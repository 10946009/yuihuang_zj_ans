
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double PI = acos(-1.0);

int main() {
    double D, V;
    while (cin >> D >> V){
        if (D == 0 && V == 0) break;
        double l = 0.0;
        double r = D;
        double ans;
        while (r - l > 1.0e-5){
            double d = (l+r) * 0.5;
            if (PI*D*D*D - PI*d*d*d > 6.0*V){
                ans = d;
                l = d;
            } else {
                r = d;
            }
        }
        cout << fixed << setprecision(3) << ans << "\n";
    }
    return 0;
}
