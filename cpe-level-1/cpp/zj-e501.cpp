
#include <iostream>
#include <map>
using namespace std;

int main() {
    string s1, s2, s;
    int T;
    cin >> T;
    getline(cin, s); //clear buffer
    getline(cin, s); //blank line
    while (T--){
        getline(cin, s1);
        getline(cin, s2);
        map <char, char> mp;
        for (int i = 0; i < s1.size(); i++){
            mp[s1[i]] = s2[i];
        }
        cout << s2 << "\n";
        cout << s1 << "\n";
        while (getline(cin, s) && s != ""){
            for (int i = 0; i < s.size(); i++){
                if (mp.count(s[i])) cout << mp[s[i]];
                else cout << s[i];
            }
            cout << "\n";
        }
    }
    return 0;
}
