
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int S, Case = 1;
    while (cin >> S){
        if (S == 0) break;
        cout << "Case " << Case++ << ": ";
        if (S == 1){
            cout << "1\n";
            continue;
        }
        int ans = -1;
        for (int i = S-1; i >= 1; i--){
            int sum = 0;
            for (int j = 1; j <= sqrt(i); j++){
                if (i % j == 0){
                    sum += j;
                    if (j * j != i) sum+= i/j;
                }
            }
            if (sum == S){
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
