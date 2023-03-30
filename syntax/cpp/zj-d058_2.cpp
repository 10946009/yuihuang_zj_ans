
#include <iostream>
using namespace std;

int main() {
    //給你一個整數 n，
    //若 n > 0 請輸出 1，
    //若 n = 0 請輸出 0，
    //若 n < 0 請輸出 -1。
    
    int n;
    cin >> n;
    
    //只用關係運算子及算術運算子
    cout << (n > 0) - (n < 0)  << "\n";
    
    return 0;
}
