
#include <iostream>
using namespace std;

int main() {
    int a[4] = {0}, n;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> n;
            a[i] += n;
        }
    }
    cout << a[0] << ":" << a[1] << "\n";
    cout << a[2] << ":" << a[3] << "\n";
    if (a[0] > a[1] && a[2] > a[3]) cout << "Win\n";
    else if (a[0] < a[1] && a[2] < a[3]) cout << "Lose\n";
    else cout << "Tie\n";
}
