
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
int a[1<<15], total;
vector <int> ans;
bool flag;

void solve(){
    ans.clear();
    if (a[1] == 0) return; //沒有根節點
    queue <int> q;
    ans.push_back(a[1]);
    q.push(1);
    while (!q.empty()) {
        int now = q.front(); q.pop();
        int left = now * 2;
        int right = now * 2 + 1;
        //按「階層」走訪
        if (a[left]){
            ans.push_back(a[left]);
            q.push(left);
        }
        if (a[right]){
            ans.push_back(a[right]);
            q.push(right);
        }
    }
}

int main() {
    string s;
    flag = true;
    while (cin >> s){
        if (s == "()"){
            if (flag) solve();
            if (flag && ans.size() == total){
                bool first = true;
                for (auto i: ans){
                    if (first) first = false;
                    else cout << " ";
                    cout << i;
                }
                cout << "\n";
            } else {
                cout << "not complete\n";
            }
            //初始化
            memset(a, 0, sizeof(a));
            flag = true;
            total = 0;
        } else {
            total++;
            int idx = 0;
            int i;
            for (i = 1; s[i] != ','; i++){
                idx *= 10;
                idx += s[i] - '0';
            }
            int pos = 1;
            for (i++; i < s.size()-1; i++){
                if (s[i] == 'L') pos *= 2;
                else pos = pos * 2 + 1;
            }
            if (a[pos]) flag = false; //同一路徑有2個節點
            else a[pos] = idx;
        }
    }
    return 0;
}
