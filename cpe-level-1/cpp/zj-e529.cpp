
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    string s;
    stringstream ss;
    int p;
    string x;
    cin >> T;
    getline(cin, s); //"\n"
    while (T--){
        getline(cin, s); // a blank line
        vector <int> P;
        getline(cin, s); //索引數組p
        ss.clear();
        ss.str(s);
        while (ss >> p){
            P.push_back(p);
        }
        vector <string> X;
        getline(cin, s); //數據數組x
        ss.clear();
        ss.str(s);
        while (ss >> x){
            X.push_back(x);
        }
        string a[(int)P.size()+1];
        for (int i = 0; i < P.size(); i++){
            a[P[i]] = X[i];
        }
        for (int i = 1; i <= P.size(); i++){
            cout << a[i] << "\n";
        }
    }
    return 0;
}
