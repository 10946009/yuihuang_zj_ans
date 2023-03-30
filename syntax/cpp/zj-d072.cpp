
#include <iostream>
using namespace std;

int main() {
    int y, n;
    
    cin >> n;
    for (int TC = 1; TC <= n; TC++) {
        cin >> y;
        cout << "Case " << TC << ": ";
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400) == 0)
            cout << "a leap year\n";
        else
            cout << "a normal year\n";
    }
    return 0;
}
