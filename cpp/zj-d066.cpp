
#include <iostream>
using namespace std;

int main() {
    int hh, mm;
    cin >> hh >> mm;

    //換算成分鐘，比較容易判斷
    int minute = hh * 60 + mm;

    if (minute >= 450 && minute < 1020) {
        cout << "At School\n";
    } else {
        cout << "Off School\n";
    }
    
    return 0;
}
