
#include <iostream>
#include <algorithm>
using namespace std;
#define pii pair<int,int>

bool cmp(pii a, pii b){
    if (a.first != b.first) return a.first < b.first;
    else return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while (getline(cin, s)) {
        pii a[256];
        for (int i = 0; i < 256; i++) {
            a[i] = {0, i};
        }
        for (int i = 0; i < s.size(); i++) {
            a[(int)s[i]].first++;
        }
        sort(a, a+256, cmp);
        for (auto i: a){
            if (i.first > 0) cout << i.second << " " << i.first << "\n";
        }
        cout << "\n";
    }
    return 0;
}
