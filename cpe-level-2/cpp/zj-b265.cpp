
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    long long course;
    while (cin >> n && n){
        int a[5];
        map<long long, int> mp;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < 5; j++){
                cin >> a[j];
            }
            sort(a, a+5);
            course = 0LL;
            for (int j = 0; j < 5; j++){
                course *= 1000;
                course += a[j];
            }
            mp[course]++;
        }
        int mx = 0;
        for (auto i: mp){
            mx = max(mx, i.second);
        }
        int ans = 0;
        for (auto i: mp){
            if (i.second == mx) ans += mx;
        }
        cout << ans << "\n";
    }
    return 0;
}
