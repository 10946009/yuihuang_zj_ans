
#include <iostream>
using namespace std;
int N, a[15];
bool used[15];

void solve(int d) {
    if (d > N) {
        for (int i = 1; i <= N; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (used[i]) continue;
        used[i] = true;
        a[d] = i;
        solve(d + 1);
        used[i] = false;
    }
}

int main() {
    cin >> N;
    solve(1);
    return 0;
}
