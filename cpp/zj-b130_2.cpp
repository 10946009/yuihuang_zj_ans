
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, x;
    while (cin >> N){
        map<int,int> mp;
        for (int i=0; i<N; i++){
            cin >> x;
            if (mp.count(x)) mp[x]++;
            else mp[x] = 1;
        }
        cout << mp.size() << '\n';
        for (auto it=mp.begin(); it!=mp.end(); it++){
            cout << (*it).first << ' ';
        }
        cout << '\n';
    }
    return 0;
}
