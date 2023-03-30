
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int t, n, Q, q, l, r;
vector <pair<int, string>> v;
string s, ans[1000005];

int main() {
    cin >> t;
    while (t--){
        cin >> n;
        v.clear();
        for (int i = 0; i < n; i++){
            cin >> s >> l >> r;
            v.push_back({l, s});
            v.push_back({r+1, s});
        }
        sort(v.begin(), v.end());
        set <string> st;
        int pos = 0;
        for (int i = 1; i <= 1000000; i++){
            while (v[pos].first == i){
                if (st.count(v[pos].second)) st.erase(v[pos].second);
                else st.insert(v[pos].second);
                pos++;
            }
            if (st.size() == 1) ans[i] = *st.begin();
            else ans[i] = "UNDETERMINED";
        }
        cin >> Q;
        while (Q--){
            cin >> q;
            cout << ans[q] << "\n";
        }
    }
}
