
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for (int i = 1; i <= N; i++) {
        a[i-1] = i;
    }
    do {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    } while (next_permutation(a, a+N));
    return 0;
}
