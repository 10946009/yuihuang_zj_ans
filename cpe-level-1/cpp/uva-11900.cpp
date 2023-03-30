
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T, N, P, Q;
    cin >> T;
    for (int TC = 1; TC <= T; TC++){
        cin >> N >> P >> Q;
        int egg[N];
        for (int i = 0; i < N; i++){
            cin >> egg[i];
        }
        sort(egg, egg+N);
        int cnt = 0, sum = 0;
        for (int i = 0; i < N; i++){
            if (cnt == P) break;
            if (sum + egg[i] <= Q){
                cnt++;
                sum += egg[i];
            }
        }
        cout << "Case " << TC << ": ";
        cout << cnt << "\n";
    }
    return 0;
}

