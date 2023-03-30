
#include <iostream>
#include <set>
using namespace std;
const int maxn = 100005;
int n, k;
int p[maxn], color[maxn];
multiset<int> st;

int Find(int x) {
    //查找同時進行路徑壓縮
    return p[x] < 0? x : p[x] = Find(p[x]);
}

void Union(int x, int y) {
    int g1 = Find(x);
    int g2 = Find(y);
    //把小群組併進大群組
    if (p[g1] > p[g2]) swap(g1, g2);
    //利用multiset紀錄每段紅色彩帶的長度
    auto it = st.find(-p[g1]);
    st.erase(it);
    it = st.find(-p[g2]);
    st.erase(it);
    p[g1] += p[g2];
    p[g2] = g1;
    st.insert(-p[g1]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> color[i];
        if (color[i]) {
            p[i] = -1;
            st.insert(1);
            if (color[i-1]) Union(i-1, i);
        }
    }
    //利用multiset紀錄每段紅色彩帶的長度，
    //可以快速找出最短及最長的長度
    int mi = *st.rbegin();
    int ma = *st.begin();
    int pos;
    for (int i = 0; i < k; i++) {
        cin >> pos;
        color[pos] = 1;
        p[pos] = -1;
        st.insert(1);
        if (color[pos-1]) Union(pos-1, pos);
        if (color[pos+1]) Union(pos, pos+1);
        mi += *st.rbegin();
        ma += *st.begin();
    }
    cout << mi << "\n";
    cout << ma << "\n";
    return 0;
}
