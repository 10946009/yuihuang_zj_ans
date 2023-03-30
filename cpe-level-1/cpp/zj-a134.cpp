
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> fib;
    int f0 = 0, f1 = 1, f2 = 1;
    for (; f2 <= 1e8; ){
        f2 = f0 + f1;
        fib.push_back(f2);
        f0 = f1;
        f1 = f2;
    }
    reverse(fib.begin(), fib.end());
    int N, n, x;
    cin >> N;
    while (N--){
        cin >> n;
        x = n;
        vector <int> ans;
        int i = 0;
        while (fib[i] > x) i++;
        for (; i < fib.size(); i++){
            if (fib[i] <= x){
                x -= fib[i];
                ans.push_back(1);
                i++;
                if (i < fib.size()) ans.push_back(0);
            } else ans.push_back(0);
        }
        cout << n << " = ";
        for (auto j: ans) cout << j;
        cout << " (fib)\n";
    }
    return 0;
}

