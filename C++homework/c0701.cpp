#include <iostream>
#include "utils.hpp"
using namespace std;

int main(int argc, char **argv)
{
    int max = 0;
    int size = 0;
    cout << "輸入你要輸入的個數(>0)" << endl;
    cin >> size;
    if (cin.fail() || size <= 0)
    {
        sorry();
    }

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "輸入第" << i + 1 << "次";
        cin >> arr[i];
        if (cin.fail())
        {
            sorry();
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "你輸入數字為：" << max << endl;
    return 0;
}