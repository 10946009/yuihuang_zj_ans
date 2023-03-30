
#include <iostream>
#include <string>
using namespace std;

int eval(){
    string s;
    cin >> s;
    if (s[0] == 'f') {
        int x = eval();
        return 2 * x - 3;
    } else if (s[0] == 'g') {
        int x = eval();
        int y = eval();
        return 2 * x + y - 7;
    } else if (s[0] == 'h') {
        int x = eval();
        int y = eval();
        int z = eval();
        return 3 * x - 2 * y + z;
    } else {
        return stoi(s);
    }
}

int main() {
    cout << eval() << endl;
    return 0;
}
