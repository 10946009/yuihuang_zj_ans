
#include <bits/stdc++.h>
using namespace std;

int n, a, b[100005];
long long ans;
pair <int, int> p[200005];

void Merge(int l, int r){
    if (l == r) return;
    int mid = (l+r)/2;
    Merge(l, mid);
    Merge(mid+1, r);
    vector <pair<int, int> > v;
    int p1 = l, p2 = mid+1;
    while (p1 <= mid && p2 <= r){
        if (p[p1].first < p[p2].first){
            v.push_back(p[p1]);
            p1++;
        }
        else{
            ans += (p1-l)*p[p2].second;
            v.push_back(p[p2]);
            p2++;
        }
    }
    while (p1 <= mid){
        v.push_back(p[p1]);
        p1++;
    }
    while (p2 <= r){
        ans += (p1-l)*p[p2].second;
        v.push_back(p[p2]);
        p2++;
    }
    for (int i = 0; i < v.size(); i++){
        p[l+i] = v[i];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n*2; i++){
        cin >> a;
        if (b[a]) p[i] = {a, 1};
        else{
            b[a] = 1;
            p[i] = {a, -1};
        }
    }
    Merge(1, n*2);
    cout << ans << "\n";
}
