
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << "PERFECTION OUTPUT\n";
    int n;
    while (cin >> n){
        if (n == 0) break;
        if (n == 1) {
            cout << setw(5) << 1 << "  DEFICIENT\n";
            continue;
        }
        int sum = 1;
        int sq = sqrt(n);
        for (int i = 2; i <= sq; i++){
            if (n % i == 0) {
                sum += i;
                sum += n / i;
            }
        }
        if (sum == n) cout << setw(5) << n << "  PERFECT\n";
        else if (sum < n) cout << setw(5) << n << "  DEFICIENT\n";
        else cout << setw(5) << n << "  ABUNDANT\n";
    }
    cout << "END OF OUTPUT\n";
    return 0;
}
