
#include <iostream>
using namespace std;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int G[51][51], G1[51][51];

int main() {
	int R, C, k, m;
	cin >> R >> C >> k >> m;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> G[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) {
				if (G[r][c] == -1) {
					G1[r][c] = G[r][c];
				} else {
					G1[r][c] = G[r][c];
					for (int j = 0; j < 4; j++) {
						int nx = r + dx[j];
						int ny = c + dy[j];
						if (nx >= 0 && nx < R && ny >= 0 && ny < C && G[nx][ny] != -1) {
							G1[r][c] -= G[r][c] / k;
							G1[r][c] += G[nx][ny] / k;
						}
					}
				}
			}
		}
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) {
				G[r][c] = G1[r][c];
			}
		}
	}
	int mn = 1e9;
	int mx = 0;
	for (int r = 0; r < R; r++) {
		for (int c = 0; c < C; c++) {
			if (G[r][c] != -1) {
				mn = min(mn, G[r][c]);
	            mx = max(mx, G[r][c]);
	        }
		}
	}
	cout << mn << "\n";
	cout << mx << "\n";
	return 0;
}
