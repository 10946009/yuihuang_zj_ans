
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    while (cin >> N){
        if (N < 0) break;
        if (N == 0) cout << "0\n";
        string ans = "";
        while (N){
            ans += '0' + (N % 3);
            N /= 3;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
}
