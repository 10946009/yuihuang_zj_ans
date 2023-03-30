
#include <iostream>
#include <sstream>
#include <set>
using namespace std;

int main() {
    string s;
    stringstream ss;
    while (getline(cin, s)){
        set <string> A, B, st;
        ss.clear();
        ss.str(s);
        while (ss >> s){
            A.insert(s);
        }
        getline(cin, s);
        ss.clear();
        ss.str(s);
        while (ss >> s){
            B.insert(s);
        }
        for (auto i:A){
            if (B.count(i)) {
                st.insert(i);
                B.erase(i);
            }
        }
        for (auto i: st){
            A.erase(i);
        }
        if (A.empty() && B.empty()){
            cout << "A equals B\n";
        } else if (A.empty()){
            cout << "A is a proper subset of B\n";
        } else if (B.empty()){
            cout << "B is a proper subset of A\n";
        } else {
            if (st.empty()){
                cout << "A and B are disjoint\n";
            } else {
                cout << "I'm confused!\n";
            }
        }
    }
    return 0;
}
