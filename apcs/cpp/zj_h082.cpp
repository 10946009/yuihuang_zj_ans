
#include <bits/stdc++.h>
using namespace std;

int n, m, idx, lose[1005];
long long s[1005], t[1005];
vector <int> v, v1, v2;

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> s[i]; //戰力
    }
    for (int i = 1; i <= n; i++){
        cin >> t[i]; //應變力
    }
    for (int i = 1; i <= n; i++){
        cin >> idx;
        v.push_back(idx); //第一輪進行配對競賽的玩家編號
    }
    while (v.size() > 1){
        for (int i = 0; i <= (int)v.size()-2; i += 2){
            long long x = v[i], y = v[i+1];
            long long a = s[x], b = t[x], c = s[y], d = t[y];
            if (a*b >= c*d){
                s[x] = a + c*d/(2*b);
                t[x] = b + c*d/(2*a);
                s[y] = c + c/2;
                t[y] = d + d/2;
                v1.push_back(x);
                lose[y]++; //失敗次數
                if (lose[y] < m) v2.push_back(y);
            }
            else{
                s[y] = c + a*b/(2*d);
                t[y] = d + a*b/(2*c);
                s[x] = a + a/2;
                t[x] = b + b/2;
                v1.push_back(y);
                lose[x]++;
                if (lose[x] < m) v2.push_back(x);
            }
        }
        if ((int)v.size() % 2 == 1) v1.push_back(v.back());
        v = v1;
        for (int i:v2) v.push_back(i);
        v1.clear();
        v2.clear();
    }
    cout << v[0] << "\n";
}
