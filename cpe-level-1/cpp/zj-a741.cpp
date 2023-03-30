
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int a[] = {10000000, 100000, 1000, 100};
string s[] = {"kuti", "lakh", "hajar", "shata"};
string ans;

string num2str(ll x){
    string s = "";
    while (x){
        s += '0' + (x % 10);
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

void solve(ll x){
    if (x >= a[0]){
        solve(x / a[0]);
        ans += " " + s[0];
        x %= (int)a[0];
    }
    for (int i = 0; i < 4; i++){
        if (x / a[i] > 0){
            ans += " " + num2str(x / a[i]) + " " + s[i];
            x %= a[i];
        }
    }
    if (x > 0) ans += " " + num2str(x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    int Case = 1;
    while (cin >> N){
        cout << "   " << Case++ << ".";
        if (N == 0) cout << " 0\n";
        else {
            ans = "";
            solve(N);
            cout << ans << "\n";
        }
    }
    return 0;
}
