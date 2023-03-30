
#include <iostream>
using namespace std;

int main() {
    int n, T = 1;
     
    while (cin >> n && n) {
        int sum = 0;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int avg = sum / n;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > avg)
                ans += a[i] - avg;
        }
        cout << "Set #" << T++ << "\n";
        cout << "The minimum number of moves is " << ans << ".\n\n";
    }
    return 0;
}
