
#include <iostream>
#include <vector>
using namespace std;

int GCD(int x, int y){
    if (!x) return y;
    if (!y) return x;
    while ((x%=y) && (y%=x));
    return x+y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;
    while (cin >> x && x){
        int a[1005];
        int N = 1;
        a[0] = x;
        while (cin >> x && x){
            a[N++] = x;
        }
        int d = abs(a[0] - a[1]);
        for (int i = 1; i < N-1; i++){
            d = GCD(d, abs(a[i] - a[i+1]));
        }
        cout << d << "\n";
    }
    return 0;
}
