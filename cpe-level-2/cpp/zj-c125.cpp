
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector <pair<int, int> >v;
int a[205][205];
int cnt = 0;

int main(){
    int n;
    while (cin >> n){
        if (n == 0) break;
        cnt++;
        v.clear();
        pair<int, int>p;
        for (int i = 0; i < n; i++){
            cin >> p.first >> p.second;
            v.push_back(p);
        }
        int temp;
        for (int i = 0; i < n-1; i++){
            for (int j = i; j < n; j++){
                temp = pow(v[i].first-v[j].first, 2) + pow(v[i].second-v[j].second, 2);
                a[i][j] = temp;
                a[j][i] = temp;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                for (int k = 0; k < n; k++){
                    a[j][k] = min(a[j][k], max(a[j][i], a[i][k]));
                }
            }
        }
        float ans = a[0][1];
        printf("Scenario #%d\nFrog Distance = %.3f\n", cnt, sqrt(ans));
    }
}
