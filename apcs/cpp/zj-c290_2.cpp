
#include <iostream>
using namespace std;
 
int main(){
    int even = 0, odd = 0;
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i+=2){
        even += s[i] - '0';
    }
    for (int i=1; i<s.size(); i+=2){
        odd += s[i] - '0';
    }
    
    cout << abs(even - odd) << endl;
 
    return 0;
}
