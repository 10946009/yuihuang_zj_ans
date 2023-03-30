
#include <iostream>
using namespace std;

int main() {
    //輸入僅有一行，小明班上的人數 n
    //1 ≤ n ≤ 200，整數(int)型態的變數即可。
    int n;
    cin >> n;
    
    //鉛筆一支 5 元，一打 50 元
    //(n / 12): 除法的商數，為整數，可以湊足一打的「打數」
    //(n % 12): 除法的餘數，為整數，湊不足一打的鉛筆支數
    cout << (n / 12) * 50 + (n % 12) * 5  << "\n";
    
    return 0;
}
