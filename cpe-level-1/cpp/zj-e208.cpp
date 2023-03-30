
#include <iostream>
using namespace std;

int main() {
    int T;
    string s;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> s;
        cout << "Case " << Case << ": ";
        char ch = '\0';
        int num = 0;
        for (int i = 0; i < s.size(); i++){
            if (isalpha(s[i])){
                for (int j = 0; j < num; j++)
                    cout << ch;
                ch = s[i];
                num = 0;
            } else {
                num *= 10;
                num += s[i] - '0';
            }
        }
        while (num--) cout << ch;
        cout << "\n";
    }
    return 0;
}
