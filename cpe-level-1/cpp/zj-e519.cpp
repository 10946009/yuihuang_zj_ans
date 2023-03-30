
#include <iostream>
using namespace std;

int main() {
    long long N, M, X, d0;
    string s; //N - M = s = X
    while (cin >> s){
        if (s == "0") break;
        X = 0;
        for (int i = 0; i < s.size(); i++){
            X *= 10;
            X += s[i] - '0';
        }
        for (d0 = 9; d0 >= 0; d0--){
            if ((X - d0) % 9 == 0){
                M = (X - d0) / 9;
                N = X + M;
                cout << N << " ";
            }
        }
        cout << "\n";
    }
}
