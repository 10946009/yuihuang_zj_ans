
#include <iostream>
using namespace std;

int main() {
	int A1, B1, C1, A2, B2, C2, n;
	cin >> A1 >> B1 >> C1;
	cin >> A2 >> B2 >> C2;
	cin >> n;
	//答案可能為負值
	int mx = -1e9;
	//每個員工皆需分配到其中一個工廠，但工廠可能沒有員工
	for (int i = 0; i <= n; i++) {
		int temp = A1 * i * i + B1 * i + C1;
		int j = n - i;
		temp += A2 * j * j + B2 * j + C2;
		mx = max(mx, temp);
	}
	cout << mx << "\n";
	return 0;
}
