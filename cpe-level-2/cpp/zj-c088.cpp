
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void Factorization(int n, string& s) {
    int b = 2, p = 0;
    vector<int> B, P;
    while (n > 1) {
        p = 0;
        while (n % b == 0) {
            p++;
            n = n / b;
        }
        if (p > 0) {
            B.push_back(b);
            P.push_back(p);
        }
        b++;
    }
    reverse(B.begin(), B.end());
    reverse(P.begin(), P.end());
    s = "";
    for (int i=0; i<B.size(); i++) {
        s = s + to_string(B[i]) + " " + to_string(P[i]) + " ";
    }
}

int main() {
    string s;
    stringstream ss;
    int p, e, num;
    
    while (getline(cin, s)) {
        if (s == "0") break;
        ss.clear();
        ss.str(s);
        num = 1;
        while (ss >> p >> e) {
            num *= (int)pow(p, e);
        }
        num--;
        Factorization(num, s);
        cout << s << endl;
    }
    return 0;
}
