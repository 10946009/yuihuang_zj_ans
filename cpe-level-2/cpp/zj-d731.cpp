
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define pii pair<int,int>
#define F first
#define S second

int main() {
	int T, N, n;
	cin >> T;
	while (T--) {
		cin >> N;
		vector<pii> v;
		for (int i=0; i<N; i++) {
			cin >> n;
			if (n > 0) {
				v.push_back({n, 1});
			} else {
				v.push_back({-n, -1});
			}
		}
		sort(v.begin(), v.end());
		int pre = v[0].S;
		int ans = 1;
		for (int i=1; i<N; i++) {
			if (v[i].S != pre) {
				pre = v[i].S;
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
