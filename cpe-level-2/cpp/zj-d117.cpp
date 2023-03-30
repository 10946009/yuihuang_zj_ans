
#include <iostream>
using namespace std;
int p[1045];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i < 1045; i++){
        if (p[i] == 0){
            for (int j = i+i; j < 1045; j+=i){
                p[j] = 1;
            }
        }
    }
    string s;
    while (cin >> s){
        int sum = 0;
        for (int i = 0; i < s.size(); i++){
            if ('a' <= s[i] && s[i] <= 'z'){
                sum += s[i] - 'a' + 1;
            } else {
                sum += s[i] - 'A' + 27;
            }
        }
        if (p[sum] == 0){
            cout << "It is a prime word.\n";
        } else {
            cout << "It is not a prime word.\n";
        }
    }
    return 0;
}
