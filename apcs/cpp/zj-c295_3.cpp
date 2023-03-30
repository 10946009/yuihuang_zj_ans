
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int sum = 0;
    vector <int> v(N);
    for (int i = 0; i < N; i++) {
        int x, mx = 0;
        for (int j = 0; j < M; j++) {
            cin >> x;
            mx = max(mx, x);
        }
        v[i] = mx;
        sum += mx;
    }
    cout << sum << "\n";
    vector <int> ans;
    for (int i = 0; i < N; i++) {
        if (sum % v[i] == 0) {
            ans.push_back(v[i]);
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
