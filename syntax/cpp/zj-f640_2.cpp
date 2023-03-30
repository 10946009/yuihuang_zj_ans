
#include <iostream>
#include <sstream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s;
    stringstream ss;
    stack<string> stk1;
    stack<int> stk2;
    while (cin >> s) {
        stk1.push(s);
    }
    while (!stk1.empty()) {
        s = stk1.top();
        stk1.pop();
        if (s == "f") {
            int x = stk2.top(); stk2.pop();
            stk2.push(2 * x - 3);
        } else if (s == "g") {
            int x = stk2.top(); stk2.pop();
            int y = stk2.top(); stk2.pop();
            stk2.push(2 * x + y - 7);
        } else if (s == "h") {
            int x = stk2.top(); stk2.pop();
            int y = stk2.top(); stk2.pop();
            int z = stk2.top(); stk2.pop();
            stk2.push(3 * x - 2 * y + z);
        } else {
            stk2.push(stoi(s));
        }
    }
    cout << stk2.top() << endl;
    return 0;
}

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s;
    stringstream ss;
    stack<string> stk1;
    stack<int> stk2;
    while (cin >> s) {
        stk1.push(s);
    }
    while (!stk1.empty()) {
        s = stk1.top();
        stk1.pop();
        if (s == "f") {
            int x = stk2.top(); stk2.pop();
            stk2.push(2 * x - 3);
        } else if (s == "g") {
            int x = stk2.top(); stk2.pop();
            int y = stk2.top(); stk2.pop();
            stk2.push(2 * x + y - 7);
        } else if (s == "h") {
            int x = stk2.top(); stk2.pop();
            int y = stk2.top(); stk2.pop();
            int z = stk2.top(); stk2.pop();
            stk2.push(3 * x - 2 * y + z);
        } else {
            stk2.push(stoi(s));
        }
    }
    cout << stk2.top() << endl;
    return 0;
}
