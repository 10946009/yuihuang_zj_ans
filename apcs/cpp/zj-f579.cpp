
#include <iostream>
#include <map>
using namespace std;

int main() {
    int a, b, n, x, ans=0;
        map<int,int> mp;
        cin >> a >> b >> n;
        for (int i=0; i<n; i++){
            mp.clear();
            while (1){
                cin >> x;
                if (x > 0){
                    mp[x]++;
                }else if (x < 0){
                    if (mp[-x] > 0){
                        mp[-x]--;
                    }
                }else{
                    break;
                }
            }
            if (mp[a] && mp[b]){
                ans+= 1;
            }
        }
        cout << ans << "\n";
}
