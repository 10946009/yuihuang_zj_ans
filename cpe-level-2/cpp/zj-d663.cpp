
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int maxn = 1005;
int prime[maxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //指數表
    for (int i = 2; i < maxn; i++) prime[i] = 1;
    for (int i = 2; i < maxn; i++) {
        if (prime[i]) {
            for (int j = i * i; j < maxn; j += i) {
                prime[j] = 0;
            }
        }
    }
    int S, T, Case = 1;
    while (cin >> S >> T) {
        if (S == 0 && T == 0) break;
        //BFS
        queue <pair<int, int>> q;
        q.push({S, 0}); // 目前的數字和轉換次數
        //branch and bound
        bool visited[maxn];
        for (int i = 0; i < maxn; i++) visited[i] = false;
        visited[S] = true;
        bool found = false;
        while (!q.empty()) {
            int now = q.front().first;
            int step = q.front().second;
            q.pop();
            if (now == T) {
                found = true;
                cout << "Case " << Case++ << ": " << step << "\n";
                break;
            }
            // A + X = B，X是一個A的質因數(1跟A不考慮進去)
            for (int i = 2; i < now; i++) {
                if (prime[i] == 0) continue;
                if (now % i != 0) continue;
                int nxt = now + i;
                if (nxt <= T && !visited[nxt]){
                    visited[nxt] = true;
                    q.push({nxt, step+1});
                }
            }
            if (found) break;
        }
        if (!found) cout << "Case " << Case++ << ": -1\n";
    }
    return 0;
}

