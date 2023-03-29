
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    string s;
    int b;
    while (cin >> b >> s) {
        int N = 0, sum = 0, len = s.size();
        for (int i = 0; i < s.size(); i++) {
            int cur = s[i] - '0'; //current digit
            N = N * b + cur;
            sum += pow(cur, len);
        }
        
        if (N == sum) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
