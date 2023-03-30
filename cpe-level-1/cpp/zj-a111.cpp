
#include <iostream>
using namespace std;

int main(){
    int N;
    while (cin >> N){
        if (N == 0) break;
        else if (N == 1) cout << "1\n";
        else {
            int F = 1;
            for (int i=2; i<=N; i++){
                F += i*i;
            }
            cout << F << '\n';
        }
    }
    return 0;
}
