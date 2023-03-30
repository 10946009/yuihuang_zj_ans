
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int G;
    string s;
    while (cin >> G){
        if (G == 0) break;
        cin >> s;
        string ans = "";
        int len = (int)s.size() / G;
        for (int i = 0; i < s.size(); i+=len){
            string s1 = s.substr(i, len);
            reverse(s1.begin(), s1.end());
            ans += s1;
        }
        cout << ans << "\n";
    }
}
