
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int myGCD(int x, int y){
    while ((x %= y) && (y %= x));
    return x + y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, x;
    string s;
    cin >> N;
    getline(cin, s);
    while (N--){
        getline(cin, s);
        stringstream ss(s);
        vector <int> v;
        
        while (ss >> x){
            v.push_back(x);
        }
        
        int mx = 0;
        for (int i = 0; i < v.size()-1; i++){
            for (int j = i+1; j < v.size(); j++){
                mx = max(mx, myGCD(v[i], v[j]));
            }
        }
        cout << mx << "\n";
    }
    return 0;
}

