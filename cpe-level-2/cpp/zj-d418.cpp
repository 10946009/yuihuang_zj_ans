
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		if (N == 1) {
			cout << "1\n";
			continue;
		}
		int digit[10] = {0}; 
		for (int i=9; i>1; i--) {
			while (N % i == 0) {
				digit[i]++;
				N /= i;
			}
			if (N == 1) break;
		}
		if (N == 1) {
			long long ans = 0;
			for (int i=2; i<=9; i++) {
				while (digit[i]--) {
					ans = ans * 10;
					ans += i;
				}
			}
			cout << ans <<'\n';
		} else {
			cout << "-1\n";
		}
	}
	return 0;
}
