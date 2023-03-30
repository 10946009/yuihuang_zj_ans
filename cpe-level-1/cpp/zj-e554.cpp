
#include <iostream>
using namespace std;

int main() {
    int n;
    string s1, s2;
    cin >> n;
    while (n--){
        cin >> s1 >> s2;
        bool flag = true;
        if (s1.size() != s2.size()){
            flag = false;
        } else {
            for (int i = 0; i < s1.size(); i++){
                if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'){
                    if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u'){
                        continue;
                    } else {
                        flag = false;
                        break;
                    }
                } else {
                    if (s1[i] != s2[i]){
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
