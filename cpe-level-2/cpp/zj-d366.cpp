
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int prime[32000];
vector <int> v;

int main() {
    for (int i = 2; i < 32000; i++){
        if (prime[i] == 0){
            v.push_back(i);
            for (int j = 2*i; j < 32000; j+=i){
                prime[j] = 1;
            }
        }
    }
    int T, L, U;
    cin >> T;
    while (T--){
        cin >> L >> U;
        int mx = 0, idx = 0;
        for (int i = L; i <= U; i++){
            int n = i, cnt = 1;
            for (auto b: v){
                int p = 0;
                while (n % b == 0){
                    p++;
                    n /= b;
                }
                cnt *= (p+1);
                if (n == 1) break;
            }
            if (cnt > mx){
                mx = cnt;
                idx = i;
            }
        }
        cout << "Between " << L << " and " << U << ", " << idx << " has a maximum of " << mx << " divisors.\n";
    }
    return 0;
}

