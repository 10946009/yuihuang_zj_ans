
#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    int Case = 1;
    while (cin >> N){
        int a[N];
        for (int i = 0; i < N; i++){
            cin >> a[i];
        }
        set <int> st;
        bool flag = true;
        for (int i = 0; i < N-1; i++){
            for (int j = i; j < N; j++){
                int tmp = a[i] + a[j];
                if (st.count(tmp)) {
                    flag = false;
                    break;
                }
                st.insert(tmp);
                
            }
            if (!flag) break;
        }
        cout << "Case #" << Case++;
        if (flag) cout << ": It is a B2-Sequence.\n\n";
        else cout << ": It is not a B2-Sequence.\n\n";
    }
}
