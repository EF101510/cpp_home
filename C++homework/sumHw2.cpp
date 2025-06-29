#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int number = 0; 
    int sum = 0;

    cout << "請問你要輸入幾個數字？" << endl;
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        cout << "請輸入第" << i << "個數字：" << endl;
        cin >> number;
        sum += number;
    }

    cout << "總合是：" << sum << endl;

    return 0;
}