
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

map <string, int> mp;
int idx;
int a[205][205];
int cnt = 0;

int getid(string str){
    if (mp.count(str)) return mp[str];
    else{
        mp[str] = idx;
        idx++;
        return mp[str];
    }
}

int main() {
    int n, r;
    while (cin >> n >> r){
        if (n == 0) break;
        cnt++;
        idx = 0;
        mp.clear();
        memset(a, -1, sizeof(a));
        string s1, s2;
        int temp, n1, n2;
        for (int i = 0; i < r; i++){
            cin >> s1 >> s2 >> temp;
            n1 = getid(s1);
            n2 = getid(s2);
            a[n1][n2] = temp;
            a[n2][n1] = temp;
        }
        cin >> s1 >> s2;
        n1 = getid(s1);
        n2 = getid(s2);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n-1; j++){
                for (int k = j+1; k < n; k++){
                    a[j][k] = max(a[j][k], min(a[j][i], a[i][k]));
                    a[k][j] = a[j][k];
                }
            }
        }
        printf("Scenario #%d\n%d tons\n", cnt, a[n1][n2]);
    }
}
