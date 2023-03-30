
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int sum = 0;
    vector <vector <int>> v(N);
    for (int i = 0; i < N; i++) {
        int x;
        for (int j = 0; j < M; j++) {
            cin >> x;
            v[i].push_back(x);
        }
        sum += *max_element(v[i].begin(), v[i].end());
    }
    cout << sum << "\n";
    vector <int> ans;
    for (int i = 0; i < N; i++) {
        int mx = *max_element(v[i].begin(), v[i].end());
        if (sum % mx == 0) {
            ans.push_back(mx);
        }
    }
    if (ans.size() == 0) {
        cout << "-1\n";
    } else {
        for (auto x : ans) {
            cout << x << " ";
        }
    }
    return 0;
}
