
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
 
int n, l;
long long ans;
set <int> st;
vector <pair<int, int> > v;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l;
    st.insert(0);
    st.insert(l);
    for (int i = 0, a, b; i < n; i++){
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    
    for (vector <pair<int, int> >::iterator it = v.begin(); it != v.end(); it++) {
        int x = (*it).second;
        st.insert(x);
        set<int>::iterator it_set = st.lower_bound(x);
        ans += (*next(it_set))-(*prev(it_set));
    }
    cout << ans << "\n";
}
