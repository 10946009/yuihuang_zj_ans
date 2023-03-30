
#include <bits/stdc++.h>
using namespace std;

int n, k, l[100005], r[100005];
long long machine[105];
pair <int, int> event[100005];

bool cmp(pair <int, int> x, pair <int, int> y){
    return x.second < y.second;
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> l[i];
    }
    for (int i = 0; i < n; i++){
        cin >> r[i];
        event[i] = make_pair(l[i], r[i]);
    }
    sort(event, event+n, cmp);
    for (int i = 0; i < k; i++){
        machine[i] = -1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        int idx = -1;
        long long mx = -2;
        for (int j = 0; j < k; j++){
            if (machine[j] >= event[i].first) continue;
            if (machine[j] > mx){
                mx = machine[j];
                idx = j;
            }
        }
        if (idx == -1) continue;
        ans++;
        machine[idx] = event[i].second;
    }
    cout << ans << "\n";
}
