
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)){
        double mx = 0.0, cnt = 0.0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' ') cnt += 1.0;
            else {
                mx = max(mx, cnt);
                cnt = 0.0;
            }
        }
        cout << ceil(log2(mx)) << "\n";
    }
    return 0;
}
