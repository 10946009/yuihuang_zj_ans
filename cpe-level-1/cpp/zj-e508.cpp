
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, N, D;
    string s;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> N;
        map <string, int> mp;
        for (int i = 0; i < N; i++){
            cin >> s >> D;
            mp[s] = D;
        }
        cin >> D;
        cin >> s;
        cout << "Case " << Case << ": ";
        if (mp.count(s)){
            if (mp[s] <= D) cout << "Yesss\n";
            else if (mp[s] <= D+5) cout << "Late\n";
            else cout << "Do your own homework!\n";
        } else {
            cout << "Do your own homework!\n";
        }
    }
    return 0;
}
