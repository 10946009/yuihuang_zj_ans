
#include <iostream>
#include <algorithm>
using namespace std;

struct Company{
    int id, check;
    double quote;
    string name;
};

bool cmp(Company a, Company b){
    if (a.check != b.check) return a.check > b.check;
    else if (a.quote != b.quote) return a.quote < b.quote;
    else return a.id < b.id;
}

int main() {
    int n, p, Case = 1;
    string s;
    while (cin >> n >> p){
        getline(cin, s); //clear buffer
        if (n == 0 && p == 0) break;
        for (int i = 0; i < n; i++)
            getline(cin, s);
        string name;
        int check;
        double quote;
        Company company[p];
        for (int i = 0; i < p; i++){
            getline(cin, name);
            cin >> quote >> check;
            getline(cin, s); //clear buffer
            company[i] = {i, check, quote, name};
            for (int j = 0; j < check; j++)
                getline(cin, s);
        }
        sort(company, company+p, cmp);
        cout << "RFP #" << Case++ << "\n";
        cout << company[0].name << "\n\n";
    }
    return 0;
}

