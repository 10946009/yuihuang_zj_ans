
#include <iostream>
using namespace std;

int main() {
    int a[10] = {0}; //數字 0 ~ 9 出現的次數
    int mx = 0; //出現最多次的數字(眾數)
    int cnt = 0; //出現最多次的數字個數
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        a[n]++;
        if (a[n] > cnt) {
            mx = i;
            cnt = a[n];
        }
    }
    cout << cnt;
    for (int i = 9; i > 0; i--) {
        if (a[i] >= 1) {
            cout << " " << i;
        }
    }
    cout << "\n";
    return 0;
}
