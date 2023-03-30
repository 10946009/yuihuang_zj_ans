
#include <iostream>
using namespace std;

int main() {
    int S, Case = 1;
    int a[12], b[12];
    while (cin >> S){
        if (S < 0) break;
        for (int i = 0; i < 12; i++){
            cin >> a[i];
        }
        for (int i = 0; i < 12; i++){
            cin >> b[i];
        }
        cout << "Case " << Case++ << ":\n";
        for (int i = 0; i < 12; i++){
            if (b[i] <= S){
                cout << "No problem! :D\n";
                S -= b[i];
            } else {
                cout << "No problem. :(\n";
            }
            S += a[i];
        }
    }
    return 0;
}
