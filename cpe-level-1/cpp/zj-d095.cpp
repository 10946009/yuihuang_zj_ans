
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    string s;
    while (cin >> s){
        if (s == "0:00") break;
        int h = 0, m = 0;
        int colon = find(s.begin(), s.end(), ':') - s.begin();
        for (int i = 0; i < colon; i++){
            h *= 10;
            h += s[i] - '0';
        }
        for (int i = colon+1; i < s.size(); i++){
            m *= 10;
            m += s[i] - '0';
        }
        double angle1, angle2;
        angle1 = 30.0 * h + 0.5 * m;
        angle2 = 6.0 * m;
        cout << fixed << setprecision(3) << min(abs(angle1 - angle2), 360.0 - abs(angle1 - angle2)) << "\n";
    }
    return 0;
}
