
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	string s;
	cin >> T;
	while (T--){
		cin >> s;
		sort(s.begin(), s.end());
		cout << s << "\n";
		while (next_permutation(s.begin(), s.end())){
			cout << s << "\n";
		}
		cout << "\n";
	} 
    return 0;
}
