
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while (cin >> s && s != "."){
        int ans = 1;
        int N = (int)s.size();
        for (int i = N; i >= 1; i--){
            bool flag = true;
            if (N % i == 0){
                string target = s.substr(0, i);
                for (int j = i; j < N; j+=i){
                    if (s.substr(j, i) != target){
                        flag = false;
                        break;
                    }
                }
                if (flag) ans = i;
            }
        }
        cout << N / ans << "\n";
    }
    return 0;
}
