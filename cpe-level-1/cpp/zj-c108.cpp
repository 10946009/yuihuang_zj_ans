
#include <iostream>
using namespace std;

int main() {
    int ans[14] = {0};
    int total, kill, cnt;
    for (int k = 1; k < 14 ; k++){
        total = 2 * k;
        for (int m = k+1; ; m++){
            if ((m-1) % total >= k){
                kill = (m - 1) % total;
                for (cnt = 2; cnt <= k; cnt++){
                    kill = (kill + m - 1) % (total - cnt + 1);
                    if (kill < k) break;
                }
                if (cnt == k+1) {
                    ans[k] = m;
                    break;
                }
            }
        }
    }
    int k;
    while (cin >> k){
        if (k == 0) break;
        else cout << ans[k] << "\n";
    }
    return 0;
}
