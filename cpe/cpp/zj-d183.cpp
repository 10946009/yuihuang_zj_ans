
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        if (n == 0){
            break;
        }
        bool f = false;
        for (int b = 1234; b <= 98765 / n; b++){
            int a = b * n;
            int c = a, d = b;
            int count = (d < 10000);
            while (d){
                count |= 1 << (d % 10);
                d /= 10;
            }
            while (c){
                count |= 1 << (c % 10);
                c /= 10;
            }
            if (count == (1 << 10)-1){
                cout << a << " / ";
                if (b < 10000) cout << "0";
                cout << b << " = " << n << "\n";
                f = true;
            }
        }
        if (!f){
            cout << "There are no solutions for " << n << ".\n";
        }
        cout << "\n";
    }
}
