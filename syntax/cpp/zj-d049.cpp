
#include <iostream>
using namespace std;

int main() {
    // 輸入僅有一行，其中包含一個西元年份 y
    // 1912 ≤ y ≤ 2147483647
    // 變數 y 宣告成整數(int)型態即可
    int y;
    cin >> y;
    
    cout << y - 1911 << "\n";
    
    return 0;
}
