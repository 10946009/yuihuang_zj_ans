
#include <iostream>
#include <iomanip>
using namespace std;
#define INF 9.9e9

struct Line{
    double x1, y1, x2, y2;
    double a, b; // y = ax + b
};

void calSlope(Line &l){
    if (l.x1 == l.x2){
        l.a = INF;
        l.b = INF;
    } else {
        l.a = (l.y2 - l.y1) / (l.x2 - l.x1);
        l.b = l.y1 - l.a * l.x1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    Line l1, l2, l3;
    cin >> T;
    cout << "INTERSECTING LINES OUTPUT\n";
    while (T--){
        cin >> l1.x1 >> l1.y1 >> l1.x2 >> l1.y2;
        cin >> l2.x1 >> l2.y1 >> l2.x2 >> l2.y2;
        l3.x1 = l1.x1; l3.y1 = l1.y1; l3.x2 = l2.x2; l3.y2 = l2.y2;
        calSlope(l1);
        calSlope(l2);
        calSlope(l3);
        
        if (l1.a == l2.a){
            if (l1.b == l3.b) cout << "LINE\n";
            else cout << "NONE\n";
        } else {
            double x, y;
            if ((l1.x1 == l1.x2) && (l2.y1 == l2.y2)){
                x = l1.x1;
                y = l2.y2;
            } else if ((l2.x1 == l2.x2) && (l1.y1 == l1.y2)){
                x = l2.x1;
                y = l1.y2;
            } else {
                x = (l2.b - l1.b) / (l1.a - l2.a);
                y = l1.a * x + l1.b;
            }
            cout << "POINT ";
            cout << fixed << setprecision(2)
            << x << " " << y << "\n";
        }
    }
    cout << "END OF OUTPUT\n";
    return 0;
}

