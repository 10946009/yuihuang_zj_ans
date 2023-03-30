
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int maxn = 4005;
int a[maxn];
int LIS[maxn];

int main() {
    int TC, N, A;
    int maxi;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> TC;
    while (TC--){
        cin >> N;
        memset(a, 0, sizeof(a));
        memset(LIS, 0, sizeof(LIS));
        for (int i=0; i<N; i++){
            cin >> A;
            a[N-1-i] = A;
            a[N+i] = A;
        }
        LIS[0] = 1;
        for (int i=1; i<2*N; i++){
            maxi = 0;
            for (int j=0; j<i; j++){
                if (a[j] < a[i])
                    maxi = max(maxi, LIS[j]);
            }
            LIS[i] = maxi + 1;
        }
        maxi = 0;
        for (int i=1; i<2*N; i++){
            maxi = max(maxi, LIS[i]);
        }
        cout << maxi << "\n";
    }
    return 0;
}
