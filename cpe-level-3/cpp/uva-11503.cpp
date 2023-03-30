
#include <iostream>
#include <map>
using namespace std;

int t, n;
string a, b;
map <string, string> mp;
map <string, int> cnt;

string f(string s){
    if (mp[s] == "") return s;
    return mp[s] = f(mp[s]);
}
int combine(string x, string y){
    if (f(x) == f(y)) return cnt[f(x)]+1;
    cnt[f(x)] += cnt[f(y)]+1;
    mp[f(y)] = f(x);
    return cnt[f(x)]+1;
}

int main() {
    cin >> t;
    while (t--){
        cin >> n;
        mp.clear();
        cnt.clear();
        for (int i = 0; i < n; i++){
            cin >> a >> b;
            cout << combine(a, b) << "\n";
        }
    }
}
