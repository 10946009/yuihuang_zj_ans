
#include <bits/stdc++.h>
using namespace std;

int n, a[305][305], inf = 1e9;
int d[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int check(int lim){
	int dis[305][305];
	memset(dis, -1, sizeof(dis));
	dis[1][1] = 0;
	queue <pair<int, int> > q;
	q.push({1, 1});
	while (!q.empty()){
		int nowx = q.front().first, nowy = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++){
			int nxtx = nowx+d[k][0], nxty = nowy+d[k][1];
			if (dis[nxtx][nxty] != -1) continue;
			if (abs(a[nowx][nowy]-a[nxtx][nxty]) <= lim){
				dis[nxtx][nxty] = dis[nowx][nowy]+1;
				q.push({nxtx, nxty});
			}
		}
	}
	return dis[n][n];
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i <= n+1; i++){
		a[0][i] = inf;
		a[n+1][i] = inf;
		a[i][0] = inf;
		a[i][n+1] = inf;
	}
	int l = -1, r = 1000000, ans;
	while (r-l > 1){
		int mid = (r+l)/2;
		int tmp = check(mid);
		if (tmp == -1) l = mid;
		else{
			r = mid;
			ans = tmp;
		}
	}
	cout << r << "\n";
	cout << ans << "\n";
}
