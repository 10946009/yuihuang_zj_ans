
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T, M;
  char a, b;
  cin >> T;
  while (T--){
    cin >> M;
    string s1 = "", s2 = "";
    for (int i=0; i<M; i++){
      cin >> a >> b;
      s1 += a;
      s2 += b;
    }
    s2 += '0';
    for (int i=M-1; i>=0; i--){
      int n1 = s1[i] - '0';
      int n2 = s2[i] - '0';
      int carry = s2[i+1] - '0';
      int tmp = n1 + n2 + carry;
      s1[i] = '0' + (tmp)%10;
      s2[i] = '0' + (tmp)/10;
    }
    cout << s1 << "\n\n";
  }
}
