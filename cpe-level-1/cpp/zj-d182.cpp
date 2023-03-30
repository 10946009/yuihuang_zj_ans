
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <string> v;

string num2str(int x, int n){
    string ret = "";
    while (x){
        ret += '0' + (x%10);
        x /= 10;
    }
    reverse(ret.begin(), ret.end());
    while (ret.size() < n){
        ret = '0' + ret;
    }
    return ret;
}

int main() {
    int N;
    while (cin >> N){
        v.clear();
        N /= 2;
        int mx = 1;
        for (int i = 0; i < N; i++){
            mx *= 10;
        }
        for (int i = 0; i < mx; i++){
            for (int j = 0; j < mx; j++){
                if ((i+j) * (i+j) == (i*mx + j)){
                    v.push_back(num2str(i, N) + num2str(j, N));
                }
            }
        }
        for (auto i: v) cout << i << "\n";
    }
    return 0;
}
