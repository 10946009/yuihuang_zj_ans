
#include <iostream>
using namespace std;

int main() {
    //給你一個整數 n，
    //若 n > 0 請輸出 1，
    //若 n = 0 請輸出 0，
    //若 n < 0 請輸出 -1。
    
    int n;
    cin >> n;
    
    //if 判斷
    if (n > 0) {
        cout << "1\n";
    } else if (n == 0) {
        cout << "0\n";
    } else {
        cout << "-1\n";
    }
    
    return 0;
}
