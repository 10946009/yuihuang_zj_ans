
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
using namespace std;

int l, i_val[260], i_ri[260], i_li[260], idx, val, pre, now;
string s, p;
bool flag;

int main() {
    while (cin >> s){
        if (s.length() == 2) continue;
        idx = 2;
        flag = true;
        memset(i_val, -1, sizeof(i_val));
        memset(i_ri, -1, sizeof(i_ri));
        memset(i_li, -1, sizeof(i_li));
        i_val[1] = 0;
        while (1){
            val = 0;
            l = s.length();
            for (int i = 1; i < l-1; i++){
                if (s[i] == ','){
                    if (i == l-2) p = "";
                    else p = s.substr(i+1, l-i-2);
                    break;
                }
                else {
                    val *= 10;
                    val += s[i]-'0';
                }
            }
            l = p.length();
            if (l == 0) i_val[1] = val;
            else{
                now = 1;
                for (int i = 0; i < l-1; i++){
                    if (p[i] == 'R'){
                        if (i_ri[now] == -1){
                            i_ri[now] = idx;
                            i_val[idx] = 0;
                            idx++;
                        }
                        now = i_ri[now];
                    }
                    else {
                        if (i_li[now] == -1){
                            i_li[now] = idx;
                            i_val[idx] = 0;
                            idx++;
                        }
                        now = i_li[now];
                    }
                }
                if (p[l-1] == 'R'){
                    if (i_ri[now] != -1){
                        now = i_ri[now];
                        if (i_val[now] > 0) flag = false;
                        else i_val[now] = val;
                    }
                    else {
                        i_ri[now] = idx;
                        i_val[idx] = val;
                        idx++;
                    }
                }
                else {
                    if (i_li[now] != -1){
                        now = i_li[now];
                        if (i_val[now] > 0) flag = false;
                        else i_val[now] = val;
                    }
                    else {
                        i_li[now] = idx;
                        i_val[idx] = val;
                        idx++;
                    }
                }
            }
            cin >> s;
            if (s.length() == 2) break;
        }
        for (int i = 1; i < idx; i++){
            if (i_val[i] == 0){
                flag = false;
                break;
            }
        }
        if (!flag){
            cout << "not complete\n";
            continue;
        }
        cout << i_val[1];
        queue <int> q;
        q.push(1);
        while (!q.empty()){
            now = q.front();
            q.pop();
            if (i_li[now] != -1){
                cout << " " << i_val[i_li[now]];
                q.push(i_li[now]);
            }
            if (i_ri[now] != -1){
                cout << " " << i_val[i_ri[now]];
                q.push(i_ri[now]);
            }
        }
        cout << "\n";
    }
}
