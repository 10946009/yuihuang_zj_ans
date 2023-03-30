
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int best = -1; //不及格中最高分數
    int worst = 101; //及格中最低分數
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 60) {
            best = max(best, a[i]);
        } else {
            worst = min(worst, a[i]);
        }
    }
    // Bubble Sort: 由小到大排序
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j ++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    //第一行由小而大印出所有成績，最後一個數字後無空白
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << "\n";
    //第二行印出最高不及格分數，如果全數及格時，於此行印出 best case
    if (best < 0) {
        cout << "best case\n";
    } else {
        cout << best << "\n";
    }
    //第三行印出最低及格分數，如果全數不及格時，於此行印出 worst case
    if (worst > 100) {
        cout << "worst case\n";
    } else {
        cout << worst << "\n";
    }
    return 0;
}
