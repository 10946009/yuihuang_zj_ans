
#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map <char, char> mp;
string s;

bool isPalindrome(){
    int len = (int)s.size();
    for (int i = 0; i < len/2; i++){
        if (s[i] != s[len-1-i]) return false;
    }
    return true;
}

bool isMirroredStr(){
    int len = (int)s.size();
    for (int i = 0; i <= len/2; i++){
        if (mp[s[i]] != s[len-1-i]) return false;
    }
    return true;
}

int main() {
    string s1, s2;
    s1 = "AEHIJLMOSTUVWXYZ012358";
    s2 = "A3HILJMO2TUVWXY501SEZ8";
    for (int i = 0; i < s1.size(); i++){
        mp[s1[i]] = s2[i];
    }
    
    while (cin >> s){
        bool flagPalindrome = isPalindrome();
        bool flagMirroredStr = isMirroredStr();
        if (flagPalindrome && flagMirroredStr) cout << s << " -- is a mirrored palindrome.\n\n";
        else if (flagPalindrome) cout << s << " -- is a regular palindrome.\n\n";
        else if (flagMirroredStr) cout << s << " -- is a mirrored string.\n\n";
        else cout << s << " -- is not a palindrome.\n\n";
    }
    return 0;
}
