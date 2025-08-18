#include <iostream>
#include "utils.hpp"
using namespace std;
int main(int argc, char **argv)
{
    int size = 0;
    float avg_sum = 0;
    cout << "輸入你要輸入的個數" << endl;
    cin >> size;
    if (cin.fail() || size <= 0)
    {
        sorry();
    }
    float arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "輸入第" << i + 1 << "個數字";
        cin >> arr[i];
    }
    avg_sum = avg(arr, size);
    cout << avg_sum << endl;
}

float avg(float arr[], int size)
{
    float x;
    float avg;
    for (int i = 0; i < size; i++)
    {
        x += arr[i];
    }
    avg = x / size;
    return avg;
}

float average(float arr[], int size)
{
    float x = 0;
    for (int i = 0; i < size; i++)
    {
        x += arr[i];
    }
    return x / size;
}
