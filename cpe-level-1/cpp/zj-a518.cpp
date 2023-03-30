
#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b){
        if (a == -1 && b == -1) break;
        if (a > b) swap(a, b);
        cout << min(b-a, 100+a-b) << "\n";
    }
    return 0;
}
