
#include <iostream>
#include <cstring>
using namespace std;
int a[30];

void solve(int N, int D){
    memset(a, 0, sizeof(a));
    if (D == 0 || N == 1){
        a[0] = 1;
        return;
    }
    int i = 0;
    int n = N;
    while (N >= 10){
        a[i++] = N % 10;
        N /= 10;
    }
    a[i] = N;
    for (int j = 1; j < D; j++){
        int carry = 0;
        for (i = 0; i < 30; i++){
            int tmp = a[i] * n + carry;
            a[i] = tmp % 10;
            carry = tmp / 10;
        }
    }
}

int main() {
    int N, D;
    while (cin >> N >> D && N+D){
        solve(N, D);
        bool zero = true;
        for (int i = 29; i >= 0; i--){
            if (zero && a[i] == 0) continue;
            else zero = false;
            cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}
