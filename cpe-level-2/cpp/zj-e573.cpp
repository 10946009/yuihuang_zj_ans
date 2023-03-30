
#include <iostream>
#include <stack>
using namespace std;

long long MAX(string s){
    stack <long long> stk;
    char op;
    long long x = 0, N = 0;
    for (int i = 0; i < s.size(); i++){
        if ('0' <= s[i] && s[i] <= '9'){
            x = x * 10 + (s[i] - '0');
        } else {
            op = s[i];
            if (op == '+') {
                N += x;
                x = 0;
            } else {
                stk.push(N + x);
                N = 0;
                x = 0;
            }
        }
    }
    stk.push(N + x);
    long long ans = 1;
    while (!stk.empty()){
        ans *= stk.top();
        stk.pop();
    }
    return ans;
}

long long MIN(string s){
    stack <long long> stk;
    char op;
    long long x = 0, N = 1;
    for (int i = 0; i < s.size(); i++){
        if ('0' <= s[i] && s[i] <= '9'){
            x = x * 10 + (s[i] - '0');
        } else {
            op = s[i];
            if (op == '+') {
                stk.push(N * x);
                N = 1;
                x = 0;
            } else {
                N *= x;
                x = 0;
            }
        }
    }
    stk.push(N * x);
    long long ans = 0;
    while (!stk.empty()){
        ans += stk.top();
        stk.pop();
    }
    return ans;
}

int main() {
    int T;
    string s;
    cin >> T;
    while (T--){
        cin >> s;
        cout << "The maximum and minimum are ";
        cout << MAX(s);
        cout << " and ";
        cout << MIN(s) << ".\n";
    }
    return 0;
}
