
#include <iostream>
#include <cmath>
using namespace std;

int Case, n, x[20], y[20];
string s;
double dp[1<<16];

double dist(int a, int b){
    double ret = sqrt((x[a]-x[b]) * (x[a]-x[b]) + (y[a]-y[b]) * (y[a]- y[b]));
    return ret;
}

double solve(int mask){
    if (dp[mask] > -1) return dp[mask];
    if (!mask) return 0;
    double mn = 1e18;
    for (int i = 0; i < n; i++){
        if (!((1<<i) & mask)) continue;
        for (int j = i+1; j < n; j++){
            if (!((1<<j) & mask)) continue;
            mn = min(mn, solve(mask ^ (1<<i) ^ (1<<j))+dist(i, j));
        }
        break;
    }
    return dp[mask] = mn;
}

int main() {
    while (cin >> n){
        if (n == 0) break;
        n *= 2;
        for (int i = 0; i < n; i++){
            cin >> s;
            cin >> x[i] >> y[i];
        }
        for (int i = 0; i < (1<<n); i++){
            dp[i] = -1e18;
        }
        Case++;
        printf("Case %d: %.2lf\n", Case, solve((1<<n)-1));
    }
}
