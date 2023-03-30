
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main() {
  int n, cnt=0;
  multiset<int> st;
  while (cin >> n) {
    st.insert(n);
    cnt++;
    multiset<int>::iterator it=st.begin();
    advance(it, st.size()/2);
    if (cnt%2==0) {
      cout << (*it + *(--it)) / 2 << endl;
    } else {
      cout << *it << endl;
    }
  }
	return 0;
}
