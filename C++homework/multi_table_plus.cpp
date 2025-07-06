#include <iostream>
using namespace std;

int main() {
    int maxA, maxB;

    cout << "請輸入被乘數與乘數" << endl;
    cin >> maxA >> maxB;

    cout << maxA << " x " << maxB << " 乘法表" << endl;

    for (int i = 1; i <= maxA; i++) {
        for (int j = 1; j <= maxB; j++) {
            cout << i << " x" << j << " = " << i * j << endl;
        }
    }
}
