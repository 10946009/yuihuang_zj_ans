
#include <iostream>
using namespace std;

int main(){
	int N, nxt;
	while (cin >> N) {
		cin >> nxt;
		int a[N][N];
		for (int i=0; i<N; i++){
			for (int j=0; j<N; j++){
				cin >> a[i][j];
			}
		}
		// 0代表左 、1代表上 、2代表右 、3代表下
		int direction[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
		int total_steps = N * N, steps = 1;
		int repeat = 1, repeat_cnt = 0;
		int r = N / 2, c = N / 2; // 從中心點出發

		cout << a[r][ c];
		while (steps < total_steps){
			for (int i=0; i<repeat; i++){
				r += direction[nxt][0];
				c += direction[nxt][1];
				cout << a[r][ c];
				steps++;
				if (steps == total_steps) break;
			}

			repeat_cnt++;
			if (repeat_cnt % 2 == 0){
				repeat++;
			}
			nxt = (nxt + 1) % 4;
		}
		cout << '\n';
	}
	return 0;
}
