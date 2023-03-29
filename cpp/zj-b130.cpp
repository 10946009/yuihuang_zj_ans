
#include <iostream>
using namespace std;

int main() {
    int N, x;
    cin >> N;
    int a[1001]; //N个1到1000之间的随机整数
    for (int i = 0; i <= 1000; i++) {
        a[i] = 0; //初始化
    }
    for (int i = 0; i < N; i++) {
        cin >> x;
        a[x]++;
    }
    int ans = 0;
    for (int i = 1; i <= 1000; i++) {
        if (a[i]) ans++;
    }
    cout << ans << "\n";
    for (int i = 1; i <= 1000; i++) {
        if (a[i]) cout << i << " ";
    }
    cout << "\n";
    return 0;
}
