
#include <iostream>
using namespace std;

int main() {
    string s;
    bool isNew;
    int cnt;
    
    while (getline(cin, s)) {
        cnt=0;
        isNew = false;
        for (int i=0; i<s.length(); i++) {
            if (isalpha(s[i])) isNew = true;
            else {
                if (isNew) {
                    cnt++;
                    isNew = false;
                }
            }
        }
        
        cout << cnt + isNew << endl;
    }
    return 0;
}
