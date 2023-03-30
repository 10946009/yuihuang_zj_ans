
#include <iostream>
using namespace std;

int main() {
    int n, D;
    cin >> n >> D;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = a[0], y = 0;
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (x != -1) {
            //有股票
            if (a[i] >= x + D) {
                ans += a[i] - x; //獲利
                x = -1; //清空持股
                y = a[i]; //紀錄上一次的賣出價格
            }
        } else {
            //沒有股票
            if (a[i] <= y - D) {
                x = a[i]; //買進股票的價格
            }
        }
    }
    cout << ans << "\n";
    return 0;
}

