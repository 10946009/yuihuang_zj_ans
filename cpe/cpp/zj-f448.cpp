
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, p, d;
vector <pair<int, int> > v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> n){
        v.clear();
        for (int i = 0; i < n; i++){
            cin >> p >> d;
            v.push_back({d, p});
        }
        sort(v.begin(), v.end());
        priority_queue <int, vector<int>, greater<int> > pq;
        for (auto i:v){
            if (i.first > pq.size()) pq.push(i.second);
            else if (i.second > pq.top()){
                pq.pop();
                pq.push(i.second);
            }
        }
        int ans = 0;
        while (!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        cout << ans << "\n";
    }
}
