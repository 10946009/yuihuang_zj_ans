
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int maze[1000][1000];
vector <pair<int, int> > v[1000000];
int exp[1000000] = {0};
int dis[1000000];
set <pair<int, int> > st;
int n, m;

int f(int x, int y){
    return x * m + y;
}

int main() {
    int num;
    cin >> num;
    while (num--){
        cin >> n >> m;
        for (int i = 0; i < n*m; i++){
            v[i].clear();
            exp[i] = 0;
            dis[i] = 1e9;
        }
        dis[0] = 0;
        st.clear();
        pair<int, int>p;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> maze[i][j];
                if (i != 0){
                    p.first = f(i, j);
                    p.second = maze[i][j];
                    v[f(i-1, j)].push_back(p);
                    p.first = f(i-1, j);
                    p.second = maze[i-1][j];
                    v[f(i, j)].push_back(p);
                }
                if (j != 0){
                    p.first = f(i, j);
                    p.second = maze[i][j];
                    v[f(i, j-1)].push_back(p);
                    p.first = f(i, j-1);
                    p.second = maze[i][j-1];
                    v[f(i, j)].push_back(p);
                }
            }
        }
        pair <int, int> now;
        st.insert({0, 0}); // {distance, idx}
        while (!st.empty()){
            now = *st.begin();
            st.erase(now);
            if (exp[now.second] == 0){
                exp[now.second] = 1;
                for (pair<int, int> next:v[now.second]){
                    if (next.second+dis[now.second] < dis[next.first]){
                        st.erase({dis[next.first], next.first});
                        dis[next.first] = next.second+dis[now.second];
                        st.insert({dis[next.first], next.first});
                    }
                }
            }
        }
        cout << dis[n*m-1] + maze[0][0] << "\n";
    }
}
