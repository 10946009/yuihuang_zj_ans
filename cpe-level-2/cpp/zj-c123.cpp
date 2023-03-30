
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    while (cin >> n && n){
        while (1){
            int a[n], point = 1;
            stack <int> stk;
            cin >> a[0];
            if (a[0] == 0) break;
            for (int i = 1; i < n; i++){
                cin >> a[i];
            }
            int i;
            for (i = 0; i < n; i++){
                if (!stk.empty() && stk.top() == a[i]){
                    stk.pop();
                }else if (a[i] >= point){
                    for (int j = point; j < a[i]; j++){
                        stk.push(j);
                    }
                    point = a[i] + 1;
                }else{
                    break;
                }
            }
            if (i == n){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
