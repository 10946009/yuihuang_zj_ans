
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, N, pre_s, cur_s, ans;
    string s;

    cin >> T;
    while (T--) {
        cin >> N;
        ans = 0;
        pre_s = (1<<27) - 1; // z, y, x, ..., c, b, a 各一個
        for (int i=0; i<N; i++) {
            cin >> s;
            cur_s = 0;
            for (int j=0; j<s.size(); j++) {
                cur_s |= (1 << (s[j] - 'a')); // 標示出現過的字母的位置
            }
            if (pre_s & cur_s) {
                // 有交集 -> 取交集
                pre_s = pre_s & cur_s;
            } else {
                // 無交集 -> 重置
                ans++;
                pre_s = cur_s;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
