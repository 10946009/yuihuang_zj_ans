
#include <bits/stdc++.h>
using namespace std;

int n, d, cnt, tot;

int main(){
    cin >> n >> d;
    for (int i = 0, a, b, c; i < n; i++){
        cin >> a >> b >> c;
        int mx = max(a, max(b, c));
        int mn = min(a, min(b, c));
        if (mx-mn >= d){
            cnt++;
            tot += (a+b+c)/3;
        }
    }
    cout << cnt << " " << tot << "\n";
}
