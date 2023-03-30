
#include <bits/stdc++.h>
using namespace std;

string s;

long long f(int l, int r){
    long long mn = 1e18, mx = -1e18, tot = 1, add = 0, num = 0;
    for (int i = l; i <= r; i++){
        if (s[i] == ','){
            tot *= add+num;
            mn = min(mn, tot);
            mx = max(mx, tot);
            tot = 1;
            add = 0;
            num = 0;
        }
        else if (s[i] == '*'){
            tot *= add+num;
            add = 0;
            num = 0;
        }
        else if (s[i] == '+'){
            add += num;
            num = 0;
        }
        else if (s[i] == 'f'){
            int cnt = 0, fr;
            for (int j = i+1; j <= r; j++){
                if (s[j] == '(') cnt++;
                else if (s[j] == ')'){
                    cnt--;
                    if (cnt == 0){
                        fr = j;
                        break;
                    }
                }
            }
            num = f(i+2, fr-1);
            i = fr;
        }
        else{
            num *= 10;
            num += s[i]-'0';
        }
    }
    tot *= add+num;
    mn = min(mn, tot);
    mx = max(mx, tot);
    return mx-mn;
}

int main(){
    cin >> s;
    s += ",0";
    cout << f(0, s.length()-1) << "\n";
}
