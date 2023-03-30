
#include <iostream>
using namespace std;
int a[1005];

int main() {
    int N;
    while (cin >> N){
        for (int i=0; i<N; i++)
            cin >> a[i];
        
        int cnt = 0;
        // Bubble Sort
        for (int i=N-1; i>0; i--){
            for (int j=0; j<i; j++){
                if (a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                    cnt++;
                }
            }
        }
        cout << "Minimum exchange operations : " << cnt << '\n';
    }
    return 0;
}
