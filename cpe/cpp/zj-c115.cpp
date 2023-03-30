
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int Case, n, a, b, c, mx[90], ans;
struct brick{
    int x, y, h;
};
vector <brick> v;
bool cmp(brick x, brick y){
    if (x.x != y.x) return x.x < y.x;
    else return x.y < y.y;
}

int main() {
    while (cin >> n){
        if (n == 0) break;
        v.clear();
        for (int i = 0; i < n; i++){
            cin >> a >> b >> c;
            v.push_back({min(a, b), max(a, b), c});
            v.push_back({min(a, c), max(a, c), b});
            v.push_back({min(b, c), max(b, c), a});
        }
        sort(v.begin(), v.end(), cmp);
        memset(mx, 0, sizeof(mx));
        ans = 0;
        for (int i = 0; i < n*3; i++){
            mx[i] += v[i].h;
            for (int j = i+1; j < n*3; j++){
                if (v[i].x < v[j].x && v[i].y < v[j].y) mx[j] = max(mx[j], mx[i]);
            }
            ans = max(ans, mx[i]);
        }
        Case++;
        cout << "Case " << Case << ": maximum height = " << ans << "\n";
    }
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int Case, n, a, b, c, mx[90], ans;
struct brick{
    int x, y, h;
};
vector <brick> v;
bool cmp(brick x, brick y){
    if (x.x != y.x) return x.x < y.x;
    else return x.y < y.y;
}

int main() {
    while (cin >> n){
        if (n == 0) break;
        v.clear();
        for (int i = 0; i < n; i++){
            cin >> a >> b >> c;
            v.push_back({min(a, b), max(a, b), c});
            v.push_back({min(a, c), max(a, c), b});
            v.push_back({min(b, c), max(b, c), a});
        }
        sort(v.begin(), v.end(), cmp);
        memset(mx, 0, sizeof(mx));
        ans = 0;
        for (int i = 0; i < n*3; i++){
            mx[i] += v[i].h;
            for (int j = i+1; j < n*3; j++){
                if (v[i].x < v[j].x && v[i].y < v[j].y) mx[j] = max(mx[j], mx[i]);
            }
            ans = max(ans, mx[i]);
        }
        Case++;
        cout << "Case " << Case << ": maximum height = " << ans << "\n";
    }
}
