
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s1, s2;
    bool notFirst = false;
    while (cin >> s1 >> s2){
        if (notFirst) cout << "\n";
        else notFirst = true;

        int n1 = (int)s1.size();
        int n2 = (int)s2.size();
        int len = max(n1, n2);
        
        if (n1 > n2){
            for (int i = n2; i < len; i++) s2 = '0' + s2;
        } else if (n1 < n2){
            for (int i = n1; i < len; i++) s1 = '0' + s1;
        }
        int M = 3; //預留進位空間
        int ans[len + M];
        memset(ans, 0, sizeof(ans));
        for (int i = M; i < len+M; i++){
            ans[i] = (s1[i-M] - '0') + (s2[i-M] - '0');
        }
        int last = len + M - 1;
        while (1) {
            if (ans[last] > 1){
                ans[last] -= 2;
                ans[last-1]++;
            }
            if (ans[last-1] > 1){
                ans[last-1] -= 2;
                ans[last-2]++;
                ans[last]++;
            }
            for (int i = last-2; i > 0; i--){
                if (ans[i] > 1){
                    ans[i] -= 2;
                    ans[i-1]++;
                    ans[i+2]++;
                }
            }
            for (int i = last; i >= 2; i--){
                if (ans[i-1] == 1 && ans[i] == 1){
                    ans[i] = 0;
                    ans[i-1] = 0;
                    ans[i-2]++;
                }
            }
            int twos = 0;
            for (int i = 0; i <= last; i++){
                twos += (ans[i] >= 2); //過程中可能出現大於2的數字
            }
            if (twos == 0) break;
        }
        bool notZero = false; //去除前方冗余的0
        for (int i = 0; i <= last; i++){
            if (notZero) cout << ans[i];
            else if (ans[i] != 0){
                notZero = true;
                cout << ans[i];
            }
        }
        cout << "\n";
    }
}

