
#include <iostream>
#include <cstring>
using namespace std;
int a[10][10];

void Print(){
    for (int i = 1; i < 10; i++){
        for (int j = 1; j <=i; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= 5; i++){
            for (int j = 1; j <= i; j++){
                cin >> a[2*i-1][2*j-1];
            }
        }
        for (int i = 2; i <= 8; i+=2){
            for (int j = 1; j <= i; j+=2){
                int tmp = (a[i-1][j] - a[i+1][j] - a[i+1][j+2]) / 2;
                a[i+1][j+1] = tmp;
                a[i][j] = a[i+1][j] + a[i+1][j+1];
                a[i][j+1] = a[i+1][j+1] + a[i+1][j+2];
            }
        }
        Print();
    }
    return 0;
}
