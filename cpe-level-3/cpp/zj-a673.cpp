
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Task {
    int ID;
    long long days;
    long long penalty;
} task;

bool cmp(struct Task a, struct Task b) {
    if (a.days * b.penalty == a.penalty * b.days)
        return a.ID < b.ID;
    else
        return a.days * b.penalty < a.penalty * b.days;
}

int main() {
    int T, N, d, p; //days, penalty
    cin >> T;
    while (T--) {
        vector<struct Task> v;
        cin >> N;
        for (int i=1; i<=N; i++) {
            cin >> d >> p;
            task.ID = i;
            task.days = d;
            task.penalty = p;
            v.push_back(task);
        }
        sort(v.begin(), v.end(), cmp);
        cout << v[0].ID;
        for (int i=1; i<v.size(); i++)
            cout << " " << v[i].ID;
        cout << endl;
    }
    return 0;
}
