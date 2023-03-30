
#include <iostream>
using namespace std;
 
int main() {
    int n, f;
    long long area, animal, eco;
    long long award;
     
    // n 組測試資料
    cin >> n;
    for (int t = 1; t <= n; t++) {
        // 每組測試資料有 f 個農夫
        cin >> f;
        award = 0;
        for (int i = 0; i < f; i++) {
            // 每列有3個正整數，分別代表各農夫農場的面積，農場裡動物的數目，該農夫的環保等級
            cin >> area >> animal >> eco;
            // 首先算出每隻動物平均居住的空間，然後乘以該農夫的環保等級
            // 再把這個值乘以所有動物的數目
            // (area / animal) * eco * animal
            award += area * eco;
        }
        cout << award << endl;
    }
    return 0;
}
