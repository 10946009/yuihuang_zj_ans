
#include <iostream>
#include <map>
using namespace std;

int main() {
    map <char, char> mp;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ01-";
    string t = "2223334445556667777888999901-";
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]] = t[i];
    }
    while (cin >> s) {
        for (int i = 0; i < s.size(); i++) {
            cout << mp[s[i]];
        }
        cout << "\n";
    }
    return 0;
}

