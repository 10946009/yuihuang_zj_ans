
#include <bits/stdc++.h>
using namespace std;

int n, a[300005];
vector <int> v; //vector存放index，依其對應的值排序
long long pre[300005];

bool cmp(int x, int y){
    if (a[x] > a[y]) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        v.push_back(i);
        pre[i] = pre[i-1] + a[i];
    }
    sort(v.begin(), v.end(), cmp);
    int l = 1, r = n;
    while (l != r){
        while (v.back() < l || v.back() > r) v.pop_back();
        int idx = v.back();
        v.pop_back();
        if (pre[idx-1]-pre[l-1] > pre[r]-pre[idx]) r = idx-1;
        else l = idx+1;
    }
    cout << a[l] << "\n";
}
