#!/usr/bin/env python 

#include <bits/stdc++.h>
using namespace std;

int n, a[25];

int main(){
    cin >> n;
    for (int i = 0; i < 3; i++){
        int m;
        cin >> m;
        a[m] = 1;
    }
    for (int i = n; i > 0; i--){
        if (!a[i]) cout << "No. " << i << "\n";
    }
}
