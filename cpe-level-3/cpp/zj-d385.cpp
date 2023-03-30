
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
  return (stoll(to_string(a)+to_string(b)) > stoll(to_string(b)+to_string(a))); 
}

int main() {
  int N, buf;
  
  while (cin >> N) {
    if (N == 0) break;
    
    vector<int> v;
    for (int i=0; i<N; i++) {
      cin >> buf;
      v.push_back(buf);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i:v) {
      cout << i;
    }
    cout << endl;
  }
  return 0;
}
