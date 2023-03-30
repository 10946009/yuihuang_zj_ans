
#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    string s;
    cin >> T;
    getline(cin, s); //"\n"
    while (T--){
        getline(cin, s); //空白行
        getline(cin, s);
        int len = s.size();
        int period = 1;
        set <string> st;
        while (period <= len) {
            st.clear();
            if (len % period == 0) {
                for (int i = 0; i < len; i+=period){
                    st.insert(s.substr(i, period));
                }
            }
            if (st.size() == 1) break;
            period++;
        }
        cout << period << "\n";
    }
    return 0;
}
