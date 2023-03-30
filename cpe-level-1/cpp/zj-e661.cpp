
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, N;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> N;
        vector <int> v(N);
        for (int i = 0; i < N; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << "Case " << Case << ": " << v[N/2] << "\n";
    }
    return 0;
}
