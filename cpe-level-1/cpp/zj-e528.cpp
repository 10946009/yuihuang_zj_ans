
#include <iostream>
using namespace std;

int t, n, a[10];

int main(){
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0; i < 10; i++){
            a[i] = 0;
        }
        for (int i = 1; i <= n; i++){
            int m = i;
            while(m){
                a[m % 10]++;
                m /= 10;
            }
        }
        for (int i = 0; i < 10; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}
