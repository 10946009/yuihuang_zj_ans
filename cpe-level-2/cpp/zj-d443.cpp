
#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 2000;

struct BigNum{
    int len;
    int num[maxn];
    
    BigNum(){
        len = 0;
        memset(num, 0, sizeof(num));
    }
    
    void delZero(){
        while (len && num[len-1] == 0){
            len--;
        }
        if (len == 0) {
            num[len++] = 0;
        }
    }
    
    void operator = (int x){
        len = 0;
        while (x){
            num[len++] = x % 10;
            x /= 10;
        }
        delZero();
    }
    
    BigNum operator + (const BigNum& y){
        BigNum ret;
        int carry = 0;
        for (int i = 0; i < len || i < y.len; i++){
            if (i < len) carry += num[i];
            if (i < y.len) carry += y.num[i];
            ret.num[ret.len++] = carry % 10;
            carry /= 10;
        }
        while (carry){
            ret.num[ret.len++] = carry % 10;
            carry /= 10;
        }
        return ret;
    }
    
    BigNum operator * (const int& y){
        BigNum ret;
        int carry = 0;
        for (int i = 0; i < len; i++){
            carry += y * num[i];
            ret.num[ret.len++] = carry % 10;
            carry /= 10;
        }
        while (carry){
            ret.num[ret.len++] = carry % 10;
            carry /= 10;
        }
        return ret;
    }
};

BigNum dp[801];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    dp[0] = 1;
    dp[1] = 0;
    for (int i = 2; i < 801; i++){
        dp[i] = (dp[i-1] + dp[i-2]) * (i-1);
    }
    int N;
    while (cin >> N && N != -1){
        for (int i = dp[N].len-1; i >= 0; i--){
            cout << dp[N].num[i];
        }
        cout << "\n";
    }
    return 0;
}
