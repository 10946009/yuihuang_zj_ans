
#include <iostream>
#include <cstring>
using namespace std;

int n, m, mod;
struct mat {
    long long a[2][2];
    mat() {
        memset(a, 0, sizeof(a));
    }
    mat operator * (const mat &b) const {
        mat ret;
        for( int i = 0; i < 2; ++i )
            for( int j = 0; j < 2; ++j )
                for( int k = 0; k < 2; ++k )
                    ret.a[i][j] = ( ret.a[i][j] + a[i][k] * b.a[k][j] ) % mod;
        return ret;
    }
};
mat f;
void solve(){
    mod = 1<<m;
    mat ret;
    ret.a[0][0] = 0;
    ret.a[1][0] = 1;
    f.a[0][0] = 0;
    f.a[0][1] = 1;
    f.a[1][0] = 1;
    f.a[1][1] = 1;
    while (n){
        if (n & 1){
            ret = f * ret;
        }
        f = f * f;
        n >>= 1;
    }
    cout << ret.a[0][0] << "\n";
}

int main() {
    while (cin >> n >> m) solve();
}
