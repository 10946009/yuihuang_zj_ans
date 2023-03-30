
#include <iostream>
#include <cstring>
using namespace std;
int pre[1000005];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, Case = 1;
    string s;
    while ((cin >> s) && (s != "")){
        memset(pre, 0, sizeof(pre));
        pre[0] = (s[0] == '1');
        for (i = 1; i < s.size(); i++){
            pre[i] = pre[i-1] + (s[i] == '1');
        }
        cout << "Case " << Case++ << ":\n";
        cin >> n;
        while (n--){
            cin >> i >> j;
            if (i > j) swap(i, j);
            if (pre[i] == pre[j] || pre[j] - pre[i] == j - i){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}
