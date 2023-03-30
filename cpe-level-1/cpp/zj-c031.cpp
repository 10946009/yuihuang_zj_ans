
#include <iostream>
#include <vector>
using namespace std;
vector <int> v;

int main() {
    int i = 1, n = 1;
    v.push_back(0);
    v.push_back(n);
    while (n < 1e7){
        i++;
        n += i;
        v.push_back(n);
    }
    
    while (cin >> n){
        int row = lower_bound(v.begin(), v.end(), n) - v.begin();
        int idx = row + n - v[row];
        cout << "TERM " << n << " IS ";
        if (row % 2){
            cout << (row+1-idx) << "/" << idx << "\n";
        } else {
            cout << idx << "/" << (row+1-idx) << "\n";
        }
    }
    return 0;
}

