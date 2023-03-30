
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long dc(const vector<int> &v) {
    int mi = *min_element(v.begin(), v.end());
    int ma = *max_element(v.begin(), v.end());
    if (mi == ma) return 0;
    int mm = mi + (ma - mi) / 2;
    vector<int> v1, v2;
    long long ret = 0;
    for (auto i : v) {
        if (i <= mm) {
            v1.push_back(i);
            ret += (int)v2.size();
        } else {
            v2.push_back(i);
        }
    }
    return ret + dc(v1) + dc(v2);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << dc(v) << "\n";
    return 0;
}
