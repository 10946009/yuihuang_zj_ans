
#include <iostream>
using namespace std;
#define ll long long

ll GCD(ll x, ll y){
    while ((x%=y) && (y%=x));
    return x+y;
}

ll LCM(ll x, ll y){
    return x/GCD(x,y)*y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M, cnt;
    ll ans, lcm;
    while (cin >> N >> M){
        ll a[M];
        for (int i=0; i<M; i++){
            cin >> a[i];
        }
        ans = 0;
        for (int i=1; i<(1<<M); i++){
            //枚舉M個數字取任意個數(cnt)的組合
            lcm = 1LL;
            cnt = 0;
            for (int j=0; j<M; j++){
                if (i & (1<<j)){
                    lcm = LCM(lcm, a[j]);
                    if (lcm > N) break;
                    cnt++;
                }
            }
            if (cnt % 2){
                //排容（奇數個因數）
                ans += N / lcm;
            } else {
                //排容（偶數個因數）
                ans -= N / lcm;
            }
        }
        cout << N - ans << "\n";
    }
    return 0;
}
