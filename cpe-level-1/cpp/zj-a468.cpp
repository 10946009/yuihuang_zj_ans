
#include <iostream>
#include <map>
using namespace std;

string month[] = {"", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

int isLeap(int y){
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400) == 0) return 1;
    else return 0;
}

int Day2D(string s){
    int ret = 0;
    for (int i = 0; i < s.size()-1; i++){
        ret *= 10;
        ret += s[i] - '0';
    }
    return ret;
}

int main() {
    int T, M1, D1, Y1, M2, D2, Y2;
    string Mth, Day;
    map <string, int> mp;
    for (int i = 0; i < 13; i++){
        mp[month[i]] = i;
    }
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> Mth >> Day >> Y1;
        M1 = mp[Mth];
        D1 = Day2D(Day);
        cin >> Mth >> Day >> Y2;
        M2 = mp[Mth];
        D2 = Day2D(Day);
        if (M2 < 2 || (M2 == 2 && D2 < 29)) Y2--;
        int cnt2 = 0;
        cnt2 += Y2 / 400 * 97;
        Y2 %= 400;
        cnt2 += Y2 / 100 * 24;
        Y2 %= 100;
        cnt2 += Y2 / 4;
        
        int cnt1 = 0;
        if (isLeap(Y1) && (M1 <= 2)) cnt1 = -1;
        cnt1 += Y1 / 400 * 97;
        Y1 %= 400;
        cnt1 += Y1 / 100 * 24;
        Y1 %= 100;
        cnt1 += Y1 / 4;
        cout << "Case " << Case << ": " << cnt2 - cnt1 << "\n";
    }
    return 0;
}
