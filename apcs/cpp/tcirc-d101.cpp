
#include <iostream>
#include <set>
using namespace std;

const int maxn = 100005;
int n, k, c[maxn], p[maxn], sum_mx, sum_mn;
multiset <int> st;

void merge(int x, int y){
    int px = p[x], py = p[y];
    //移除兩段舊的長度
    st.erase(st.find(x-px+1));
    st.erase(st.find(py-y+1));
    //利用陣列把屬於同一段紅色彩帶的格子串成一個環
    p[px] = py;
    p[py] = px;
    //加入這段新長度
    st.insert(py-px+1);
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> c[i];
        if (c[i] == 1){
            p[i] = i;
            st.insert(1);
            if (c[i-1] == 1) merge(i-1, i);
        }
    }
    if (st.size()){
        sum_mx += *st.rbegin();
        sum_mn += *st.begin();
    }
    for (int i = 0; i < k; i++){
        int q;
        cin >> q;
        c[q] = 1;
        p[q] = q;
        st.insert(1);
        if (c[q-1] == 1) merge(q-1, q);
        if (c[q+1] == 1) merge(q, q+1);
        sum_mx += *st.rbegin();
        sum_mn += *st.begin();
    }
    cout << sum_mx << "\n" << sum_mn << "\n";
}
