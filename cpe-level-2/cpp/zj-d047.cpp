
#include <iostream>
using namespace std;

bool mul4(string y){
    //後兩位數字為4的倍數
    int len = (int)y.size();
    int num = (y[len-2] - '0') * 10 + (y[len-1] - '0');
    return (num % 4 == 0);
}

bool mul3(string y){
    //所有位數和為3的倍數
    int num = 0;
    for (int i = 0; i < y.size(); i++){
        num += y[i] - '0';
    }
    return (num % 3 == 0);
}

bool mul5(string y){
    //個位數為0或5
    int len = (int)y.size();
    if ((y[len-1] == '0') || (y[len-1] == '5')) return true;
    else return false;
}

bool mul11(string y){
    //奇數位數和與偶數位數和之差為11的倍數
    int even = 0, odd = 0;
    for (int i = 0; i < y.size(); i+=2)
        even += y[i] - '0';
    for (int i = 1; i < y.size(); i+=2)
        odd += y[i] - '0';
    return (abs(even-odd) % 11 == 0);
}

bool isLeap(string y){
    int len = (int)y.size();
    if (y[len-1] == '0' && y[len-2] == '0'){
        return mul4(y.substr(0, len-2));
    } else {
        return mul4(y);
    }
}

bool isHuluculu(string y){
    if (mul3(y) && mul5(y)) return true;
    else return false;
}

bool isBulukulu(string y){
    if (isLeap(y) && mul5(y) && mul11(y)) return true;
    else return false;
}

int main() {
    string y; //年份得用大數存放
    bool first = true;
    while (cin >> y){
        if (first) first = false;
        else cout << "\n";
        bool ordinary = true;
        //要以下列的順序印出來：閏年-->huluculu-->bulukulu
        if (isLeap(y)) {
            ordinary = false;
            cout << "This is leap year.\n";
        }
        if (isHuluculu(y)) {
            ordinary = false;
            cout << "This is huluculu festival year.\n";
        }
        if (isBulukulu(y)) {
            ordinary = false;
            cout << "This is bulukulu festival year.\n";
        }
        if (ordinary) cout << "This is an ordinary year.\n";
    }
    return 0;
}
