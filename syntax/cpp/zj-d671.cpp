
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int T;
    string s;
    cin >> T;
    getline(cin, s);
    while (T--){
        getline(cin, s); //密文包含空白
        int sq = sqrt(s.size());
        if (sq * sq != s.size()){
            cout << "INVALID\n";
            continue;
        }
        for (int col = 0; col < sq; col++){
            for (int row = 0; row < sq; row++){
                cout << s[row * sq + col];
            }
        }
        cout << "\n";
    }
    return 0;
}
