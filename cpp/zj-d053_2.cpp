
#include <iostream>
#include <cstring>
using namespace std;

int n, m, a[305][305];

int solve(int x, int y) {
    if (a[x][y] != -1) return a[x][y];

    if (x > 1) a[x][y] = solve(x-1, y) + solve(1, y) + 1;
    else a[x][y] = solve(x, y-1) + solve(x, 1) + 1;

    a[y][x] = a[x][y];
    return a[x][y];
}

int main() {
    memset(a, -1, sizeof(a));
    a[1][1] = 0;
    while (cin >> n >> m) {
        cout << solve(n, m) << "\n";
    }
}
