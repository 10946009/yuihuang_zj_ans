
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int n, h[200005], p[200005];
long long ans;
set <pair<int, int> > st;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    st.insert({h[1], 1});
    for (int i = 2; i <= n; i++) {
        // h(j) > h(i)+p(i)，則 j 是 i 的「無法超越的位置」
        auto it = st.upper_bound(make_pair(h[i] + p[i], i));
        if (it == st.end()) ans += i - 1;
        else ans += i - ((*it).second) - 1;
        //維護遞減的身高序列
        while (!st.empty() && st.begin()->first <= h[i]) st.erase(st.begin());
        st.insert({h[i], i});
    }
    cout << ans << "\n";
}
