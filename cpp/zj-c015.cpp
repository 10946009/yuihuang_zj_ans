
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
bool solve(long long &x) {
    string s = to_string(x);
    reverse(s.begin(), s.end());
    x += stoll(s);
    s = to_string(x);
    //判斷 s 是不是迴文
    for (int l = 0, r = s.size()-1; l <= r; l++, r--) {
        if (s[l] != s[r]) {
            return false;
        }
    }
    return true;
}
int main() {
    int N;
    cin >> N;
    while (N--) {
        long long P;
        cin >> P;
        int cnt = 1;
        while (!solve(P)) {
            cnt++;
        }
        cout << cnt << " " << P << "\n";
    }
    return 0;
}
