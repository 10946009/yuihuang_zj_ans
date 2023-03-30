
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map <char, vector<double> > mp;
    //    0am - 8am - 18pm -22pm -8am -18pm -22pm -24pm
    mp['A'] = {0.02, 0.10, 0.06, 0.02, 0.10, 0.06, 0.02};
    mp['B'] = {0.05, 0.25, 0.15, 0.05, 0.25, 0.15, 0.05};
    mp['C'] = {0.13, 0.53, 0.33, 0.13, 0.53, 0.33, 0.13};
    mp['D'] = {0.17, 0.87, 0.47, 0.17, 0.87, 0.47, 0.17};
    mp['E'] = {0.30, 1.44, 0.80, 0.30, 1.44, 0.80, 0.30};
    int b[] = { 480, 1080, 1320, 1920, 2520, 2760, 2880};
    char step;
    int h1, m1, h2, m2;
    string phone;
    while (cin >> step){
        if (step == '#') break;
        double cost = 0.0;
        int Time[7] = {0};
        cin >> phone >> h1 >> m1 >> h2 >> m2;
        m1 += h1 * 60;
        m2 += h2 * 60;
        if (m2 < m1) m2 += 24 * 60;
        for (int i = 0; i < 7; i++){
            if (m1 <= b[i]){
                if (m2 <= b[i]) {
                    Time[i] = m2 - m1;
                    cost += mp[step][i] * Time[i];
                    break;
                } else {
                    Time[i] = b[i] - m1;
                    cost += mp[step][i] * Time[i];
                    m1 = b[i];
                }
            }
        }
        //  765-7457   439   240   389  C  362.44
        printf("%10s%6d%6d%6d%3c%8.2f\n", phone.c_str(), Time[1]+Time[4],
               Time[2]+Time[5], Time[0]+Time[3]+Time[6], step, cost);
    }
    return 0;
}

