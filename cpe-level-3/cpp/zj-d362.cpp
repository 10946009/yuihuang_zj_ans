
#include <iostream>
#include <vector>
using namespace std;

const int maxn = 20000000;
bool prime[maxn]; // 用 int 會 MLE
vector<int> v;

int main() {
    // 建立質數表
    for (int i=2; i<maxn; i++)
        prime[i] = 1;
    int p = 2;
    while (p*p < maxn){
        if (prime[p] == 1)
            for (int i=p*p; i<maxn; i+=p){
                prime[i] = 0;
            }
        p++;
    }
    // 找出符合題意的質數
    for (int i=2; i<maxn-2; i++){
        if (prime[i] && prime[i+2])
            v.push_back(i);
    }
    int S;
    while (cin >> S)
        cout << '(' << v[S-1] << ", " << v[S-1]+2 << ")\n";
    
    return 0;
}
