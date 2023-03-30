
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a != 0) a = 1;
    if (b != 0) b = 1;

    bool flag = false;
    if ((a && b) == c){
        cout << "AND\n";
        flag = true;
    }

    if ((a || b) == c){
        cout << "OR\n";
        flag = true;
    }

    if ((a != b) == c){
        cout << "XOR\n";
        flag = true;
    }

    if (!flag) cout << "IMPOSSIBLE\n";
    return 0;
}
