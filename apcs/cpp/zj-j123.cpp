
#include <bits/stdc++.h>
using namespace std;

int shape[5][4][4], w[5] = {1, 3, 2, 3, 2}, g[35][55], fail;

int main() {
	int r, c, n;
	cin >> r >> c >> n;
	for (int i = 0; i < 4; i++) shape[0][i][0] = 1;
	for (int i = 0; i < 3; i++) shape[1][0][i] = 1;
	for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) shape[2][i][j] = 1;
	shape[3][0][2] = shape[3][1][0] = shape[3][1][1] = shape[3][1][2] = 1;
	for (int i = 0; i < 3; i++) for (int j = 0; j < 2; j++) shape[4][i][j] = 1;
	shape[4][0][0] = 0;

	for (int iter = 0; iter < n; iter++){
		char ch;
		int x, h;
		cin >> ch >> h;
		x = ch-'A';
		int l;
		for (l = c-1; l >= 0; l--){
			bool flag = true;
			for (int i = 0; i < 4; i++){
				for (int j = 0; j < 4; j++){
					if (!shape[x][i][j]) continue;
					if (g[h+i][l+j]) flag = false;
				}
			}
			if (!flag) break;
		}
		l++;
		if (c-l < w[x]){
			fail++;
			continue;
		}
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 4; j++){
				if (shape[x][i][j]) g[h+i][l+j] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (!g[i][j]) cnt++;
		}
	}
	cout << cnt << " " << fail << "\n";
}
