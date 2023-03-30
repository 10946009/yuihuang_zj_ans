
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string, char> mp;
    mp["0 1 0 1"] = 'A';
    mp["0 1 1 1"] = 'B';
    mp["0 0 1 0"] = 'C';
    mp["1 1 0 1"] = 'D';
    mp["1 0 0 0"] = 'E';
    mp["1 1 0 0"] = 'F';
    unsigned int n;
    string s, new_line;
    while (cin >> n) {
        //混用cin與getline時，注意cin之後，buffer中還殘留一個"\n"
        getline(cin, new_line);
        for (unsigned int i = 0; i < n; i++) {
            getline(cin, s);
            cout << mp[s];
        }
        cout << "\n";
    }
    return 0;
}
