
#include <iostream>
#include <vector>
#include <map>
using namespace std;
map <int, vector<int> > mp;
 
int main() {
    for (int i = 0; i < 225; i++){
        if (i * i > 50000) break;
        for (int j = 0; j < 225; j++){
            if (i * i + j * j > 50000) break;
            for (int k = 0; k < 225; k++){
                int n = i * i + j * j + k * k;
                if (n > 50000) break;
                if (mp.count(n)) continue;
                mp[n] = {i, j, k};
            }
        }
    }
    int N, K;
    cin >> N;
    while (N--){
        cin >> K;
        if (mp.count(K)){
            for (auto i: mp[K]){
                cout << i << " ";
            }
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }
}
