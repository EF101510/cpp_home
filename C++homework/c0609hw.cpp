#include <iostream>
using namespace std;

void square(int x) {
    cout << "[傳值] 傳進來的 x = " << x << endl;
    int result = x * x;
    cout << "平方結果為：" << result << endl;
}

void setZero(int* x) {
    cout << "[傳址] 原本 *x = " << *x << endl;
    *x = 0;
    cout << "已設為 0，*x = " << *x << endl;
}

void doubleValue(int& x) {
    cout << "[傳參考] 原本 x = " << x << endl;
    x = x * 2;
    cout << "加倍後 x = " << x << endl;
}

int main() {
    // 第一題
    int a = 5;
    cout << "=== 傳值" << endl;
    cout << "主程式中的 a = " << a << endl;
    square(a);
    cout << " a  = " << a << endl << endl;

    // 第二題
    int b = 42;
    cout << "傳址" << endl;
    cout << "主程式中的 b = " << b << endl;
    setZero(&b);
    cout << "= b" << b << endl << endl;

    // 第三題
    int c = 8;
    cout << "傳參考 " << endl;
    cout << "c = " << c << endl;
    doubleValue(c);
    cout << "c = " << c << endl << endl;

    return 0;
}
