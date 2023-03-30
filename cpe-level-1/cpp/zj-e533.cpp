
#include <iostream>
using namespace std;

int main() {
    int T, a[10];
    cin >> T;
    cout << "Lumberjacks:\n";
    while (T--){
        for (int i = 0; i < 10; i++){
            cin >> a[i];
        }
        bool flag = a[1] > a[0];
        bool ordered = true;
        for (int i = 1; i < 9; i++){
            for (int j = i+1; j < 10; j++){
                if (flag){
                    if (a[j] < a[j-1]){
                        ordered = false;
                        break;
                    }
                } else {
                    if (a[j] > a[j-1]){
                        ordered = false;
                        break;
                    }
                }
            }
            if (!ordered) break;
        }
        if (ordered) cout << "Ordered\n";
        else cout << "Unordered\n";
    }
    return 0;
}

