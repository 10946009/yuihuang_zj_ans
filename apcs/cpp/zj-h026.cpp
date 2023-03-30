
#include <iostream>
using namespace std;

struct Fist {
    //a[x].won: 能贏過 x 的出拳
    int won, lost, drew;
} a[6];

int main() {
    //0指石頭，2指剪刀，5指布
    a[0] = {5,2,0};
    a[2] = {0,5,2};
    a[5] = {2,0,5};
    int F, N;
    cin >> F >> N;
    int y[N];
    for (int i = 0; i < N; i++) {
        cin >> y[i];
    }
    for (int i = 0; i < N; i++) {
        if (F == a[y[i]].drew) {
            cout << F << " ";
            //下一拳
            if (i > 0 && y[i] == y[i-1]) {
                F = a[y[i]].won;
            } else {
                F = y[i];
            }
        } else {
            if (F == a[y[i]].won) {
                cout << F << " : Won at round " << i+1 << "\n";
            } else {
                cout << F << " : Lost at round " << i+1 << "\n";
            }
            return 0;
        }
    }
    cout << ": Drew at round " << N << "\n";
    return 0;
}

