
#include <iostream>
using namespace std;
const int maxn = 1000005;
int prime[maxn];

int check(int x){
    //檢查 x 是否為循環質數
    if (prime[x] == 0){
        int digits = 0;
        int tmp = x;
        while (tmp) {
            tmp /= 10;
            digits++;
        }
        tmp = 1;
        for (int i = 1; i < digits; i++){
            tmp *= 10;
        }
        while (--digits){
            x = x % tmp * 10 + x / tmp;
            if (prime[x] == 1) return 0;
        }
        return 1;
    } else return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //質數表
    for (int i = 2; i < maxn; i++){
        if (prime[i] == 0){
            for (int j = i+i; j < maxn; j+=i){
                prime[j] = 1;
            }
        }
    }
    int n1, n2;
    while (cin >> n1){
        if (n1 == -1) break;
        cin >> n2;
        int ans = 0;
        for (int i = n1; i <= n2; i++){
            ans += check(i);
        }
        if (ans == 0) cout << "No Circular Primes.\n";
        else if (ans == 1) cout << "1 Circular Prime.\n";
        else cout << ans << " Circular Primes.\n";
    }
    return 0;
}
