
#include <iostream>
#include <algorithm>
using namespace std;

int a[101][101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    while (cin >> N) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cin >> a[i][j];
                if (i > 0) a[i][j] += a[i-1][j];
                if (j > 0) a[i][j] += a[i][j-1];
                if (i > 0 && j > 0) a[i][j] -= a[i-1][j-1];
            }
        }
        int maxSum = -127*100*100;
        int subRect = 0;
        for (int i=0; i<N; i++)
            for (int j=0; j<N; j++)
                for (int k=i; k<N; k++)
                    for (int l=j; l<N; l++) {
                        subRect = a[k][l];
                        if (i > 0) subRect -= a[i-1][l];
                        if (j > 0) subRect -= a[k][j-1];
                        if (i > 0 && j > 0) subRect += a[i-1][j-1];
                        maxSum = max(maxSum, subRect);
                    }
        cout << maxSum << endl;
    }
    return 0;
}
