
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int x, int y){
    return x > y;
}

int main() {
    int n, d, r;
    while (cin >> n >> d >> r){
        if (n == 0 && d == 0 && r == 0) break;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, cmp);
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (a[i] + b[i] > d){
                ans += (a[i] + b[i] - d) * r;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
