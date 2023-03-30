
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
const int maxn = 10005;
int p[maxn];

bool isPrime(int x){
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i*i <= x; i+=2){
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    //p[i] = -1: unknown, 0: f(i) non-prime; 1: f(i) prime
    memset(p, -1, sizeof(p));
    p[0] = 1;
    p[1] = 1;
    int a, b;
    while (cin >> a >> b){
        int cnt = 0;
        for (int i = a; i <= b; i++){
            int n = i*i + i + 41;
            if (p[i] == -1){
                p[i] = isPrime(n);
            }
            if (p[i]) cnt++;
        }
        cout << fixed << setprecision(2) << (double)cnt * 100 / (b-a+1) + 1e-6 << "\n";
    }
    return 0;
}
