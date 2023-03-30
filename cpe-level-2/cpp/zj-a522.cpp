
#include <iostream>
using namespace std;
int a[20];

int main() {
    int cases, target, sticks, num, tmp, i;
    bool flag;
    while (cin >> cases){
        while (cases--){
            cin >> target;
            cin >> sticks;
            for (int i = 0; i < sticks; i++){
                cin >> a[i];
            }
            num = 1;
            for (int i = 1; i < sticks; i++){
                num <<= 1;
                num++;
            }
            flag = false;
            for (int _i = 0; _i <= num; _i++){
                tmp = 0;
                i = _i;
                for (int j = 0; j < sticks; j++){
                    if (i & 1) tmp += a[j];
                    i >>= 1;
                }
                if (tmp == target){
                    flag = true;
                    break;
                }
            }
            if (flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
