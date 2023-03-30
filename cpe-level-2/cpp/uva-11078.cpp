
#include <iostream>
#include <set>
using namespace std;
int T, n, x;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--) {
        cin >> n;
        set <int> st1, st2;
        cin >> x;
        st1.insert(x); //senior
        for (int i = 1; i < n; i++) {
            cin >> x;
            st2.insert((*st1.rbegin()) - x); //max(senior - junior)
            st1.insert(x);
        }
        cout << *st2.rbegin() << "\n";
    }
    return 0;
}
