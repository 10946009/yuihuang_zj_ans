
#include <iostream>
using namespace std;

int n;
int b, p;

int main()
{
    while (cin >> n) {
        for (b = 2; b <= n; b++) {
            p = 0;
            while (n % b == 0) {
                p++;
                n = n / b;
            }
            if (p > 1) {
                cout << b << "^" << p;
                if (n > 1)
                    cout << " * ";
            }   
            else if (p == 1) {
                cout << b;
                if (n > 1)
                    cout << " * ";
            }

            if (n == 1) {
                cout << "\n";
                break;
            }
        }
    }
    return 0;
}
