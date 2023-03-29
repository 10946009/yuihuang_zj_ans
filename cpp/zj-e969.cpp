
#include <iostream>
using namespace std;

int n, m, k, a[2] = {32, 55}, idx;

int main(){
    cin >> n >> m >> k;
    if (n < a[k]) {
        cout << "Wayne can't eat and drink.\n";
        return 0;
    }
    
    while (n >= a[(idx + k) % 2]) {
        cout << idx * m << ": Wayne ";

        if ((idx + k) % 2) cout << "drinks a Corn soup";
        else cout << "eats an Apple pie";
        
        n -= a[(idx + k) % 2];

        if (n > 1) cout << ", and now he has " << n << " dollars.\n";
        else if (n == 1) cout << ", and now he has " << n << " dollar.\n";
        else cout << ", and now he doesn't have money.\n";

        idx++;
    }
}
