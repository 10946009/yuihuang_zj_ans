
#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0) {
            a += 1;
        }
        if (b % 2 == 0) {
            b -= 1;
        }
        int num=(b-a)/2+1;
        int total;
        total=(a+b)/2*num;
        cout << "Case " << i << ": ";
        cout << (a + b) / 2 * ((b - a) / 2 + 1) << "\n";
    }
}
