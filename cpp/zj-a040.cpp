
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        int d = 0, a[7] = {};
        int tmp = i;
        //找出每一位數的數字
        while (tmp) {
            a[d++] = tmp % 10;
            tmp /= 10;
        }
        //判斷是否為阿姆斯壯數
        int sum = 0;
        for (int j = 0; j < d; j++) {
            //計算a[j]的 d 次方
            sum += pow(a[j], d);
        }
        if (sum == i) {
            cnt++;
            cout << i << " ";
        }
    }
    if (cnt == 0) cout << "none\n";
    return 0;
}
