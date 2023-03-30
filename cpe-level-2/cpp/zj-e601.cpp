
#include <iostream>
using namespace std;

int K, Q, N, kx, ky, qx, qy, nx, ny;

int main() {
    while (cin >> K >> Q >> N){
        if (K == Q){
            cout << "Illegal state\n";
            continue;
        }
        kx = K / 8;
        ky = K % 8;
        qx = Q / 8;
        qy = Q % 8;
        nx = N / 8;
        ny = N % 8;
        if (qy!=ny && qx!=nx){
            cout << "Illegal move\n";
            continue;
        }
        if (Q == N || K == N){
            cout << "Illegal move\n";
            continue;
        }
        if (qy==ny && ny==ky){
            if (qx > nx && kx < qx && kx >= nx){
                cout << "Illegal move\n";
                continue;
            }
            if (qx < nx && kx > qx && kx <= nx){
                cout << "Illegal move\n";
                continue;
            }
        }
        else if (qx==nx && nx==kx){
            if (qy > ny && ky < qy && ky >= ny){
                cout << "Illegal move\n";
                continue;
            }
            if (qy < ny && ky > qy && ky <= ny){
                cout << "Illegal move\n";
                continue;
            }
        }
        if ((abs(nx-kx)==1 && ny==ky) || (nx==kx && abs(ny-ky)==1)){
            cout << "Move not allowed\n";
            continue;
        }
        bool flag = false;
        if (kx+1 < 8 && kx+1 != nx && ky != ny) flag = true;
        if (kx-1 >= 0 && kx-1 != nx && ky != ny) flag = true;
        if (ky+1 < 8 && kx != nx && ky+1 != ny) flag = true;
        if (ky-1 >= 0 && kx != nx && ky-1 != ny) flag = true;
        if (flag) cout << "Continue\n";
        else cout << "Stop\n";
    }
}
