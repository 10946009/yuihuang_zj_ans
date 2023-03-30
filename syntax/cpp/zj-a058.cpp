
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x, ans[3] = {};
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        ans[x % 3]++;
    }
    
    for (int i = 0; i < 3; i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
