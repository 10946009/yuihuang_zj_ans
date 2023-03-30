
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define pii pair<int,int>
#define F first
#define S second
int a[5][5];

bool bingo(){
    int sum;
    //check rows
    for (int i = 0; i < 5; i++){
        sum = 0;
        for (int j = 0; j < 5; j++){
            sum += a[i][j];
        }
        if (sum == 0) return true;
    }
    //check columns
    for (int i = 0; i < 5; i++){
        sum = 0;
        for (int j = 0; j < 5; j++){
            sum += a[j][i];
        }
        if (sum == 0) return true;
    }
    //check diagonal-1
    sum = 0;
    for (int i = 0; i < 5; i++){
        sum += a[i][i];
    }
    if (sum == 0) return true;
    //check diagonal-2
    sum = 0;
    for (int i = 0; i < 5; i++){
        sum += a[i][4-i];
    }
    if (sum == 0) return true;
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--){
        map <int, pii> mp;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (i == 2 && j == 2){
                    a[2][2] = 0;
                    continue;
                }
                cin >> a[i][j];
                mp[a[i][j]] = {i, j};
            }
        }
        vector <int> v(75);
        for (int i = 0; i < 75; i++){
            cin >> v[i];
        }
        for (int i = 0; i < 75; i++){
            if (mp.count(v[i])) {
                auto now = mp[v[i]];
                a[now.F][now.S] = 0;
                if (bingo()) {
                    cout << "BINGO after " << i+1 << " numbers announced\n";
                    break;
                }
            }
        }
    }
}
