
#include <iostream>
#include <map>
using namespace std;
#define pii pair<int,int>

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, A, B;
    while (cin >> n && n){
        map<pii,int> mp;
        for (int i = 0; i < n; i++){
            cin >> A >> B;
            mp[{A, B}]++;
        }
        int ans = 0;
        for (auto i: mp){
            pii p = i.first;
            if (mp[{p.second, p.first}] == i.second){
                ans += i.second;
            }
        }
        if (ans == n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
