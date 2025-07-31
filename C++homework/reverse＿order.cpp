#include <iostream>
#include "utils.hpp"
using namespace std;

int main()
{
    int size;

    cout << "請輸入陣列大小：";
    cin >> size;

    if (cin.fail() || size <= 0)
    {
        cout << "輸入錯誤，請輸入正整數。" << endl;
        return 1;
    }

    int arr[size];

    for (int i = 0; i < size; ++i)
    {
        cout << "請輸入第 " << i + 1 << " 個數：";
        cin >> arr[i];

        if (cin.fail())
        {
            sorry();
        }
    }

    cout << "反向輸出：";
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
