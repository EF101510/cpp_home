#include <iostream>
using namespace std;

int main() {
    cout << "這是9＊9乘法表" << endl;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

    return 0;
}
