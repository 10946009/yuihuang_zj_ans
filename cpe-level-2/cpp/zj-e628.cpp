
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    char op;
    long long n;
    while (cin >> s >> op >> n){
        vector <int> q; //quotient
        long long r = 0; //remainder
        for (int i = 0; i < s.size(); i++){
            r = 10 * r + (s[i] - '0'); //long long避免計算過程overflow
            q.push_back(r / n);
            r %= n;
        }
        if (op == '/') {
            bool zero = true;
            for (auto i: q){
                if (zero){
                    zero = (i == 0);
                    if (zero) continue;
                }
                cout << i;
            }
            if (zero) cout << "0\n";
            else cout << "\n";
        } else cout << r << "\n";
    }
    return 0;
}
