
// 找出 in / out 字串的 ASCII 距離
#include <iostream>
using namespace std;

int main() {
    string s = "1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5";
    string t = "*CDC is the trademark of the Control Data Corporation.";
    
    for (int i = 0; i < s.size(); i++) {
        cout << t[i] - s[i] << " ";
    }
    cout << "\n";
    return 0;
}
