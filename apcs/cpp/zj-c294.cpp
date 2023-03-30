
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int a[3];
    for (int i=0; i<3; i++) {
        cin >> a[i];
    }
    sort(a, a+3);
     
    for (int i=0; i<3; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    if (a[0]+a[1] < a[2]) {
        cout << "No\n";
    } else if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) {
        cout << "Right\n";
    } else if (a[0]*a[0] + a[1]*a[1] > a[2]*a[2]) {
        cout << "Acute\n";
    } else {
        cout << "Obtuse\n";
    }
    return 0;
}
