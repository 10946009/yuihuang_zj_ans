
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=10005;

int main() {
    int N, Q, a[maxn], query;
    int kase = 0;
    
    while (cin >> N >> Q && N) {
        printf("CASE# %d:\n", ++kase);
        for (int i=0; i<N; i++)
            cin >> a[i];
        sort(a, a+N);
        
        while (Q--) {
            cin >> query;
            int idx = lower_bound(a, a+N, query) - a;
            if (a[idx] == query)
                printf("%d found at %d\n", query, idx+1);
            else
                printf("%d not found\n", query);
        }
    }
    return 0;
}

