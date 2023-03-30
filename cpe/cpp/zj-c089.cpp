
#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    map <int, char> mp1;
    map <char, int> mp2;
    string s = "0123456789ABCDEF";
    for (int i = 0; i < 16; i++) {
        mp1[i] = s[i];
    }
    for (int i = 0; i < 16; i++) {
        mp2[s[i]] = i;
    }
    while (getline(cin, s)) {
        stringstream ss(s);
        string src;
        int n, m;
        ss >> src;
        ss >> s;
        n = stoi(s);
        ss >> s;
        m = stoi(s);
        long long target = 0;
        for (int i = 0; i < src.size(); i++) {
            target *= n;
            target += mp2[src[i]];
        }
        char a[7] = {};
        for (int i = 6; i >= 0; i--) {
            int x = target % m;
            target /= m;
            if (target == 0) {
                if (x == 0) {
                    a[i] = ' ';
                } else {
                    a[i] = mp1[x];
                }
            } else {
                a[i] = mp1[x];
            }
        }
        if (target == 0) {
            for (int i = 0; i < 7; i++) {
                cout << a[i];
            }
            cout <<  "\n";
        } else {
            cout << "ERROR\n";
        }
    }
    return 0;
}
