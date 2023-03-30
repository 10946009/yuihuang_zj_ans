
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int a[26]; // 紀錄每個城市的上一個城市
vector <int> va[26]; // 紀錄每個城市到羅馬的path，包含自己

int main() {
    int Case, n, m, n1, n2;
    string str1, str2;
    cin >> Case;
    while (Case--){
        cin >> n >> m;
        memset(a, -1, sizeof(a));
        for (int i = 0; i < 26; i++){
            va[i].clear();
        }
        for (int i = 0; i < n; i++){
            cin >> str1 >> str2;
            n1 = str1[0] - 'A';
            n2 = str2[0] - 'A';
            a[n2] = n1; // n1 是 n2 的上一個城市
        }
        int cur;
        for (int i = 0; i < 26; i++){
            cur = i;
            va[i].push_back(cur);
            while (a[cur] != -1){
                // 仍有上一個城市
                va[i].push_back(a[cur]);
                cur = a[cur];
            }
        }
        for (int i = 0; i < m; i++){
            cin >> str1 >> str2;
            n1 = str1[0] - 'A';
            n2 = str2[0] - 'A';
            int root = -1; // 找出兩個城市最近的共同城市
            for (int j : va[n1]){
                for (int k : va[n2]){
                    if (j == k){
                        root = k;
                        break;
                    }
                }
                if (j == root) break;
            }
            for (int j = 0; j < va[n1].size(); j++){
                if (va[n1][j] == root) break;
                cout << char('A' + va[n1][j]);
            }
            bool flag = false;
            for (int j = va[n2].size()-1; j >= 0; j--){
                // 從羅馬開始輸出
                if (va[n2][j] == root) flag = true;
                if (flag) cout << char('A' + va[n2][j]);
            }
            cout << "\n";
        }
    }
}
