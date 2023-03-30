
#include <iostream>
using namespace std;
 
int main()
{
    string s, t;
    int k;
    while (cin >> s >> t) {
        k = t[0] - s[0];
        if (k < 0) {
            k += 26;
        }
        cout << k << endl;
    }
}
