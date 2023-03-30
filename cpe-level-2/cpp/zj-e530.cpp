
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxn = 1299709+5;
int p[maxn];
vector <int> v;

int main() {
    for (int i = 2; i < maxn; i++){
        if (p[i] == 0){
            for (int j = i+i; j < maxn; j+=i){
                p[j] = 1;
            }
            v.push_back(i);
        }
    }
    int k;
    while (cin >> k){
        if (k == 0) break;
        auto it = lower_bound(v.begin(), v.end(), k);
        int p2 = *it;
        if (p2 == k) cout << "0\n";
        else {
            int p1 = *(--it);
            cout << p2 - p1 << "\n";
        }
    }
    return 0;
}
