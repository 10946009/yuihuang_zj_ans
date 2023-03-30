
#include <iostream>
using namespace std;

int main() {
    int n0, n1, n2, n3;
    while (cin >> n0 >> n1 >> n2 >> n3){
        if (n0 == 0 && n1 == 0 && n2 == 0 && n3 == 0) break;
        int ans = 720; //順時鐘方向轉轉盤2整圈
        //繼續順時鐘方向轉直到到達第一個號碼上
        ans += ((40 + n0 - n1) % 40) * 9;
        ans += 360; //逆時鐘方向轉轉盤一整圈
        //繼續逆時鐘方向轉直到到達第二個號碼
        ans += ((40 + n2 - n1) % 40) * 9;
        //順時鐘方向轉轉盤直到到達第三個號碼
        ans += ((40 + n2 - n3) % 40) * 9;
        cout << ans << "\n";
    }
}
