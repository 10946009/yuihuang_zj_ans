
#include <iostream>
using namespace std;

int main() {
    int L;
    string s;
    while (cin >> L){
        if (L == 0) break;
        cin >> s;
        int R = -1, D = -1;
        int mn = 2000005;
        for (int i = 0; i < L; i++){
            if (s[i] == 'Z'){
                mn = 0;
                break;
            } else if (s[i] == 'R'){
                if (D >= 0){
                    mn = min(mn, i - D);
                }
                R = i;
            } else if (s[i] == 'D'){
                if (R >= 0){
                    mn = min(mn, i - R);
                }
                D = i;
            }
        }
        cout << mn << "\n";
    }
    return 0;
}
