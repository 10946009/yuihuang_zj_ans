
#include <iostream>
#include <map>
using namespace std;

int main() {
    int w, h;
    while (cin >> w >> h){
        map <int, int> mp;
        mp[w]++;
        mp[h]++;
        for (int i = 0; i < 5; i++){
            cin >> w >> h;
            mp[w]++;
            mp[h]++;
        }
        if (mp.size() > 3) cout << "IMPOSSIBLE\n";
        else {
            bool flag = true;
            for (auto i: mp){
                if (i.second % 4 != 0){
                    flag = false;
                    break;
                }
            }
            if (flag) cout << "POSSIBLE\n";
            else cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}
