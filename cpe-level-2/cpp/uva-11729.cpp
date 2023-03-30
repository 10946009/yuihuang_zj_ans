
#include <iostream>
#include <algorithm>
using namespace std;

struct Soldier{
    int B, J;
};
bool cmp(Soldier p, Soldier q){
    return p.J > q.J;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, TC = 1;
    while (cin >> N && N){
        Soldier soldier[N];
        for (int i = 0; i < N; i++){
            cin >> soldier[i].B  >> soldier[i].J;
        }
        sort(soldier, soldier+N, cmp);
        int sum_B = 0, sum_J  = 0;
        for (int i = 0; i < N; i++){
            sum_B += soldier[i].B;
            if (sum_B + soldier[i].J > sum_J) sum_J = sum_B + soldier[i].J;
        }
        cout << "Case " << TC++ << ": ";
        cout << sum_J << "\n";
    }
    return 0;
}
