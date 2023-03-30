
#include <iostream>
#include <set>
using namespace std;

int main() {
    int T, Case=1;
    long long N, tmp;
    cin >> T;
    while (T--){
        cin >> N;
        cout << "Case #" << Case++ << ": " << N;
        set<long long> st;
        while (N != 1){
            if (st.count(N)){
                break;
            }
            st.insert(N);
            tmp = 0;
            while (N >= 10){
                tmp += (N % 10) * (N % 10);
                N /= 10;
            }
            tmp += N*N;
            N = tmp;
        }
        if (N == 1) cout << " is a Happy number.\n";
        else cout << " is an Unhappy number.\n";
    }
    return 0;
}
