
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxn = 200005;
int n, x[maxn], y[maxn], a[maxn];

bool cmp(int i, int j){
    if (x[i] != x[j]) return x[i] < x[j];
    return y[i] < y[j];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        a[i] = i;
    }
    sort(a, a+n, cmp);
    vector <int> v;
    for (int i = 0; i < n; i++){
        int now = y[a[i]];
        if (v.empty() || now >= v.back()) v.push_back(now);
        else v[upper_bound(v.begin(), v.end(), now)-v.begin()] = now;
    }
    cout << v.size() << "\n";
}
