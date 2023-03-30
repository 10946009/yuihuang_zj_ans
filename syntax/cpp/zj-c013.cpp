
#include <iostream>
using namespace std;
 
int main() {
    int n, A, F;
    cin >> n;
    while (n--) {
        cin >> A >> F;
        for (int i = 0; i < F; i++) {
            //上坡
            for (int j = 1; j <= A; j++) {
                for (int k = 1; k <= j; k++) {
                    cout << j;
                }
                cout << "\n";
            }
            //下坡
            for (int j = A - 1; j > 0; j--) {
                for (int k = 1; k <= j; k++) {
                    cout << j;
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }
    return 0;
}
