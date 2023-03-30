
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long S, D, cnt;
    while (cin >> S >> D){
        cnt = S;
        D -= S;
        while (D > 0){
            cnt++;
            D -= cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}
