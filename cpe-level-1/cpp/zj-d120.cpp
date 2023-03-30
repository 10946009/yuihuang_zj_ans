
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n){
        if (n == 0) break;
        cout << n << " : ";
        int cnt = 0;
        for (int i = 2; i <= n; i++){
            if (n % i == 0) cnt++;
            while (n % i == 0) n /= i;
            if (n == 1) break;
        }
        cout << cnt << "\n";
    }
    return 0;
}
