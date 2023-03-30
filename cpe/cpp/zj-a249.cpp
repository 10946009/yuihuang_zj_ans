
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, D, I;
    cin >> T;
    while (T--){
        cin >> D >> I;
        I--;
        int pos = 1;
        for (int i = 1; i < D; i++){
            if (I % 2) {
                pos = pos * 2 + 1;
            } else {
                pos = pos * 2;
            }
            I >>= 1;
        }
        cout << pos << "\n";
    }
    return 0;
}
