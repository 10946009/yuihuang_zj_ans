
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int Case=1;
    int N1, N2;
    int s1[101], s2[101];
    int lcs[101][101];
    while (cin >> N1 >> N2){
    	if (N1 == 0 && N2 == 0) break;
    	for (int i = 0; i < N1; i++){
    		cin >> s1[i];
    	}
    	for (int i = 0; i < N2; i++){
    		cin >> s2[i];
    	}
    	memset(lcs, 0, sizeof(lcs));
    	for (int i = 1; i <= N1; i++){
    		for (int j = 1; j <= N2; j++){
    			if (s1[i-1] == s2[j-1]) lcs[i][j] = lcs[i-1][j-1] + 1;
    			else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
    		}
    	}
    	cout << "Twin Towers #" << Case++ << "\n";
    	cout << "Number of Tiles : " << lcs[N1][N2] << "\n";
    }
    return 0;
}
