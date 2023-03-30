
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;
	int Q[N][M];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> Q[i][j];
		}
	}
	int cost[K];
	memset(cost, 0, sizeof(cost));
	for (int k = 0; k < K; k++) {
		cost[k] = 0;
	}
	
	for (int k = 0; k < K; k++) {
		int c[N];
		for (int i = 0; i < N; i++) {
			cin >> c[i];
		}
		int traffic[M][M];
		memset(traffic, 0, sizeof(traffic));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				traffic[c[i]][j] += Q[i][j];
			}
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < M; j++) {
				if (i == j) {
					cost[k] += traffic[i][j];
				} else {
					if (traffic[i][j] <= 1000) {
						cost[k] += traffic[i][j] * 3;
					} else {
						cost[k] += 1000 * 3;
	                    cost[k] += (traffic[i][j] - 1000) * 2;
					}
				}
			}
		}
	}
	int mn = 1e9;
	for (int i = 0; i < K; i++) {
		mn = min(mn, cost[i]);
	}
	cout << mn << "\n";
	return 0;
}
