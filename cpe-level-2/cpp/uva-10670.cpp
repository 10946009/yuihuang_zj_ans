
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int T, N, M, L, A, B;
struct Agency{
    string name;
    int cost;
};

int solve(int N, int M, int A, int B){
    if (N == M) return 0;
    if (N / 2 >= M) {
        int cost = (N - N/2) * A;
        if (cost > B){
            cost = B;
        }
        return solve(N/2, M, A, B) + cost;
    }
    return solve(N-1, M, A, B) + A;
}

bool cmp(Agency p, Agency q){
    if (p.cost == q.cost) return p.name < q.name;
    else return p.cost < q.cost;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> T;
    for (int TC = 1; TC <= T; TC++){
        cin >> N >> M >> L;
        Agency agency[L];
        for (int i = 0; i < L; i++){
            cin >> s;
            for (int j = 0; j < s.size(); j++){
                if (s[j] == ':' || s[j] == ','){
                    s[j] = ' ';
                }
            }
            stringstream ss(s);
            ss >> agency[i].name >> A >> B;
            agency[i].cost = solve(N, M, A, B);
        }
        sort(agency, agency+L, cmp);
        cout << "Case " << TC << "\n";
        for (int i = 0; i < L; i++){
            cout << agency[i].name << " " << agency[i].cost << "\n";
        }
    }
    return 0;
}
