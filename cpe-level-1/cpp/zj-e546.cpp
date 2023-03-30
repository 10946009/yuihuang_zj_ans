
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int N, R, x;
    while (cin >> N >> R){
        int a[N];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < R; i++){
            cin >> x;
            a[x-1] = 1;
        }
        bool flag = true;
        for (int i = 0; i < N; i++){
            if (!a[i]) {
                flag = false;
                cout << i+1 << " ";
            }
        }
        if (flag) cout << "*\n";
        else cout << "\n";
    }
    return 0;
}

