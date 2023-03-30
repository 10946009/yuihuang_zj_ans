
#include <iostream>
using namespace std;

struct guard{
    int x1, x2, y1, y2;
};

int main() {
    int T;
    guard G1, G2;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> G1.x1 >> G1.y1 >> G1.x2 >> G1.y2;
        cin >> G2.x1 >> G2.y1 >> G2.x2 >> G2.y2;
        int strong = 0;
        if (max(G1.x1, G2.x1) < min(G1.x2, G2.x2) &&
            max(G1.y1, G2.y1) < min(G1.y2, G2.y2)){
            strong = (min(G1.x2, G2.x2) - max(G1.x1, G2.x1)) *
            (min(G1.y2, G2.y2) - max(G1.y1, G2.y1));
        }
        int weak = (G1.x2 - G1.x1) * (G1.y2 - G1.y1) + 
                   (G2.x2 - G2.x1) * (G2.y2 - G2.y1) - 2 * strong;
        cout << "Night " << Case << ": ";
        cout << strong << " " << weak << " " 
             << 10000 - strong - weak << "\n";
    }
    return 0;
}
