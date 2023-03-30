
#include <iostream>
using namespace std;
const int maxn = 33000; //2^15 = 32 * 1024 = 32768
int prime[maxn];

int main() {
    //建立指數表
    for (int i = 2; i < maxn; i++){
        if (prime[i] == 0){
            for (int j = i+i; j < maxn; j+=i){
                prime[j] = 1;
            }
        }
    }
    int n;
    while (cin >> n){
        if (n == 0) break;
        int cnt = 0;
        for (int i = 2; i <= n / 2; i++){
            if (!prime[i] && !prime[n-i]){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
