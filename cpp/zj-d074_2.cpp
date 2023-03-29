
#include <iostream>
using namespace std;
 
int main() {
    int n, tmp, mx = 0;
    cin >> n;
    while (n--){
        cin >> tmp;
        mx = max(mx, tmp);
    }
    cout << mx << "\n";
}
