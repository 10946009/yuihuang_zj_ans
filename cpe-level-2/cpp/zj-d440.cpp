
#include <iostream>
#include <cmath>
using namespace std;

int Phi(int x){
    // 歐拉函數Phi(x)
    //「小於 x」 的「正整數」中「與 x 互質」的數的數目
    if (x < 2) return 0;
    int ret = x;
    int sq = sqrt(x);
    for (int p=2; p<=sq; p++){
        if (x % p == 0){
            while (x % p == 0) x /= p;
            ret -= ret / p;
        }
        if (x == 1) break;
    }
    if (x > 1) ret -= ret / x;
    return ret;
}

int main() {
    int n;
    while (cin >> n && n){
        cout << Phi(n) << "\n";
    }
    return 0;
}
