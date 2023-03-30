
#include <iostream>
using namespace std;
#define ll long long

void exEuclidean(ll A, ll B, ll &X, ll &Y, ll &D){
    //Extended Euclidean algorithm
    //給定二個整數A、B，必存在整數X、Y使得AX + BY = gcd(A, B) = D
    if (!B){
        D = A;
        X = 1;
        Y = 0;
    } else {
        exEuclidean(B, A % B, Y, X, D);
        Y -= X * (A / B);
    }
}

int main() {
    ll A, B, X, Y, D;
    while (cin >> A >> B){
        exEuclidean(A, B, X, Y, D);
        cout << X << " " << Y << " " << D << "\n";
    }
    return 0;
}
