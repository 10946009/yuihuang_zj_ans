
#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int n, m, cntn, in[26], day;
string s, str;
set <int> st[26];

int main() {
    while (cin >> n >> m){
        cin >> str;
        for (int i = 0; i < 26; i++){
            in[i] = 0;
            st[i].clear();
        }
        for (int i = 0; i < m; i++){
            cin >> s;
            st[s[0]-'A'].insert(s[1]-'A');
            st[s[1]-'A'].insert(s[0]-'A');
        }
        queue <int> q;
        cntn = 0;
        for (int i = 0; i < 3; i++){
            in[str[i]-'A'] = -1e9;
            q.push(str[i]-'A');
            cntn++;
        }
        day = 0;
        while (cntn != n && !q.empty()){
            day++;
            while (!q.empty()){
                for (int i:st[q.front()]){
                    in[i]++;
                }
                q.pop();
            }
            for (int i = 0; i < 26; i++){
                if (in[i] >= 3){
                    in[i] = -1e9;
                    q.push(i);
                    cntn++;
                }
            }
        }
        if (cntn != n) cout << "THIS BRAIN NEVER WAKES UP\n";
        else cout << "WAKE UP IN, " << day << ", YEARS" << "\n";
    }
}
