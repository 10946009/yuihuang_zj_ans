
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int s, f;
};

bool cmp(const Node lhs, const Node rhs) {
    return lhs.f < rhs.f;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int s, f, cnt = 0;
        Node t[20];
        while (cin >> s >> f) {
            if (s == 0 && f == 0) break;
            t[cnt].s = s;
            t[cnt].f = f;
            cnt++;
        }
        sort(t, t+cnt, cmp);
        int ans = 1, T = t[0].f;
        for (int i = 1; i < cnt; i++) {
            if (t[i].s >= T) {
                ans++;
                T = t[i].f;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
