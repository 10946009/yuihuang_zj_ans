
#include <iostream>
using namespace std;

bool cmp(string s1, string s2){
    int cnt = 0;
    for (int i = 0; i < s1.size(); i++){
        if (s1[i] != s2[i]) cnt++;
    }
    return (cnt <= 1);
}

int main() {
    int T;
    string s;
    cin >> T;
    while (T--){
        cin >> s;
        if (s.size() == 5){
            cout << "3\n";
        } else {
            if (cmp("one", s)) cout << "1\n";
            if (cmp("two", s)) cout << "2\n";
        }
    }
    return 0;
}
