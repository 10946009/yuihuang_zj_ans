
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[5];

bool dfs(int idx, int sum){
    if (idx == 4) return sum == 23;
    if (dfs(idx+1, sum + a[idx+1])) return true;
    else if (dfs(idx+1, sum - a[idx+1])) return true;
    else if (dfs(idx+1, sum * a[idx+1])) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]) {
        if (a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0) break;
        sort(a, a+5);
        bool flag = false;
        if (dfs(0, a[0])) {
            cout << "Possible\n";
            continue;
        }
        else {
            while (next_permutation(a, a+5)){
                if (dfs(0, a[0])) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag) cout << "Possible\n";
        else cout << "Impossible\n";
    }
    return 0;
}

