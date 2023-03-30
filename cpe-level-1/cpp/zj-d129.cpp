
#include <iostream>
#include <algorithm>
using namespace std;
int a[1505];

int main() {
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;
    a[5] = 5;
    for (int i = 6; i <= 1500; i++){
        int idx1 = 1;
        while (a[idx1] * 2 <= a[i-1]) idx1++;
        int idx2 = 1;
        while (a[idx2] * 3 <= a[i-1]) idx2++;
        int idx3 = 1;
        while (a[idx3] * 5 <= a[i-1]) idx3++;
        a[i] = min({
            a[idx1] * 2,
            a[idx2] * 3,
            a[idx3] * 5
        });
    }
    cout << "The 1500'th ugly number is " << a[1500] << ".\n";
    return 0;
}
