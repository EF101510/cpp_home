#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int sum = 0;

    for (int i = 1; i <= 4; ++i)
    {
        cout << "請輸入第" << i << "個數字：" << endl;
        cin >> number;
        sum += number;
    }

    cout << "總合是：" << sum << endl;

    return 0;
}
