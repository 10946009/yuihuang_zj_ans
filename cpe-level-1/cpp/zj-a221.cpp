
#include <iostream>
using namespace std;

int main() {
    int T;
    string s1, s2, s;
    cin >> T;
    getline(cin, s);
    for (int Case = 1; Case <= T; Case++){
        getline(cin, s1);
        getline(cin, s2);
        cout << "Case " << Case << ": ";
        if (s1 == s2){
            cout << "Yes\n";
            continue;
        }
        s = "";
        for (int i = 0; i < s1.size(); i++){
            if (s1[i] != ' '){
                s += s1[i];
            }
        }
        if (s == s2) {
            cout << "Output Format Error\n";
        } else {
            cout << "Wrong Answer\n";
        }
    }
    return 0;
}
