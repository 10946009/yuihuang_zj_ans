
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int K, E, Case = 1;
    while (cin >> K >> E){
        string keyword[K];
        for (int i = 0; i < K; i++){
            cin >> keyword[i];
        }
        string s;
        getline(cin, s);
        string excuse[E];
        int cnt[20] = {0};
        int mx = 0;
        for (int i = 0; i < E; i++){
            getline(cin, s);
            excuse[i] = s;
            int idx = 0;
            string word = "";
            while (idx < s.size()){
                char c = tolower(s[idx]);
                if (c >= 'a' && c <= 'z') {
                    word += c;
                } else {
                    for (int k = 0; k < K; k++){
                        if (word == keyword[k]) {
                            cnt[i]++;
                            break;
                        }
                    }
                    word = "";
                }
                idx++;
            }
            mx = max(mx, cnt[i]);
        }
        cout << "Excuse Set #" << Case++ << "\n";
        for (int i = 0; i < E; i++) {
            if (cnt[i] == mx){
                cout << excuse[i] << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}
