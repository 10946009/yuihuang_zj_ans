
#include <iostream>
#include <map>
using namespace std;

int main() {
    string s[] = {"", "BFPV", "CGJKQSXZ", "DT", "L", "MN", "R"};
    map <char, int> mp;
    for (int i = 1; i <= 6; i++){
        for (int j = 0; j < s[i].size(); j++){
            mp[s[i][j]] = i;
        }
    }
    string S;
    
    while (cin >> S){
        int cur = 0;
        for (int i = 0; i < S.size(); i++){
            if (mp.count(S[i])){
                if (mp[S[i]] != cur) {
                    cout << mp[S[i]];
                    cur = mp[S[i]];
                }
            } else {
                cur = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}
