
#include <iostream>
#include <cstring>
using namespace std;
int a[100];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, tmp;
    while (cin >> n){
        if (n == 0) break;
        memset(a, 0, sizeof(a));
        for (int i=0; i<n; i++){
            cin >> tmp;
            a[tmp]++;
        }
        for (int i=0; i<100; i++){
            while (a[i]--){
                cout << i << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
