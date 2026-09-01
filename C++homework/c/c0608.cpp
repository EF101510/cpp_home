#include <iostream>
using namespace std;

int sum(int &, int &, int &);

int main(int argc, char **argv)
{
    int chinese, english, math;
    cout << "請輸入國英數成績：";
    cin >> chinese >> english >> math;
    int a = sum(chinese, english, math);
}

int sum(int &chinese, int &english, int &math)
{
    int sum = chinese + english + math;
    cout << "總分是： " << sum << endl;
    return sum;
}

int average(int &chinese, int &english, int &math)
{
    int avg = (chinese + english + math) / 3;
    cout << "平均是： " << avg << endl;
    return avg;
}