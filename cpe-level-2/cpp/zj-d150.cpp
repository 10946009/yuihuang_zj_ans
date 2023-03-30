
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int T, n;
    cin >> T;
    while (T--){
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n, cmp);
        int sum = 0;
        for (int i = 2; i < n; i+=3){
            sum += a[i];
        }
        cout << sum << "\n";
    }
}
