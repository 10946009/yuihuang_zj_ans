
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a[8], b[8]; // 分別用0, 1 代表平仄
        for (int i = 1; i <= 7; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= 7; i++) {
            cin >> b[i];
        }
        string ans = "";
        // A: 二四不同二六同：每一句第二、四個字必須不同平仄，而第二、六個字必須相同平仄
        if ((a[2] == a[4]) || (a[2] != a[6]) || (b[2] == b[4]) || (b[2] != b[6])) {
            ans += 'A';
        }
        // B: 仄起平收：第一句的結尾必須為仄聲，第二句的結尾必須為平聲
        if ((a[7] == 0) || (b[7] == 1)) {
            ans += 'B';
        }
        // C: 上下相對：第一、二句的第二、四、六個字平仄必須不同
        if ((a[2] == b[2]) || (a[4] == b[4]) || (a[6] == b[6])){
            ans += 'C';
        }
        if (ans == "") {
            ans = "None";
        }
        cout << ans << "\n";
    }
    return 0;
}
