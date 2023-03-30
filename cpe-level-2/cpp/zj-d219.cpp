
#include <iostream>
using namespace std;

typedef long long ll;

ll bigMod(ll B, ll P, ll M) {
    if (P == 0) return 1;
    else if (P == 1) return B%M;
    else if (P%2 == 0) {
        ll tmp = bigMod(B, P/2, M) % M;
        return (tmp * tmp) % M;
    } else {
        ll tmp = bigMod(B, P/2, M) % M;
        return (B * tmp * tmp) % M;
    }
}

int main() {
    ll B, P, M;
    
    while (cin >> B >> P >> M) {
        cout << bigMod(B, P, M) << endl;
    }
    return 0;
}
