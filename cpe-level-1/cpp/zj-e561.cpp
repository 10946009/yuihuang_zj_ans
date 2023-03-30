
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, N;
    cin >> T;
    while (T--){
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++){
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < N-1; i++){
            for (int j = i+1; j < N; j++){
                if (a[i] > a[j]){
                    swap(a[i], a[j]);
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }
    return 0;
}
