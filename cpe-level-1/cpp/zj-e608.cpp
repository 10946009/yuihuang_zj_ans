
#include <iostream>
#include <cstring>
using namespace std;
int a[1000][26];
string s[1000];

int main() {
    int T, N;
    cin >> T;
    while (T--){
        cin >> N;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < N; i++){
            cin >> s[i];
            for (int j = 0; j < s[i].size(); j++){
                a[i][s[i][j] - 'a']++;
            }
        }
        string S;
        while (cin >> S){
            if (S == "END") break;
            int A[26] = {0};
            for (int j = 0; j < S.size(); j++){
                A[S[j] - 'a']++;
            }
            int i, j, cnt = 0;
            cout << "Anagrams for: " << S << "\n";
            for (i = 0; i < N; i++){
                for (j = 0; j < 26; j++){
                    if (A[j] != a[i][j]) break;
                }
                if (j == 26) {
                    cout << "  " << ++cnt << ") " << s[i] << "\n";
                }
            }
            if (cnt == 0) cout << "No anagrams for: " << S << "\n";
        }
    }
    return 0;
}
