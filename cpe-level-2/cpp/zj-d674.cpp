
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int Case = 1;
    string s1, s2;
    int lcs[101][101];
    
    while (getline(cin, s1) && (s1[0] != '#')) {
        getline(cin, s2);
        
        memset(lcs, 0, sizeof(lcs));
        
        for (int i=1; i<=s1.length(); i++){
            for (int j=1; j<=s2.length(); j++){
                if (s1[i-1] == s2[j-1]) lcs[i][j] = lcs[i-1][j-1] + 1;
                else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
        cout << "Case #" << Case++ << ": you can visit at most " << lcs[s1.length()][s2.length()] << " cities.\n";
    }
    return 0;
}
