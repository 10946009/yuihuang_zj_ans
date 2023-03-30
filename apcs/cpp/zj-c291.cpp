
#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 50005;
int fr[maxn]; //friend
int group[maxn]; //group

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> fr[i]; //紀錄每個人的好友編號
    }
    memset(group, -1, sizeof(group));
    for (int i=0; i<N; i++){
        if (group[i] >= 0) continue;
        group[i] = i;
        int now = i;
        while (fr[now] != i){
            group[fr[now]] = i;
            now = fr[now];
        }
    }
    int ans = 0;
    for (int i=0; i<N; i++){
        ans += (group[i] == i);
    }
    cout << ans << '\n';

    return 0;
}
