#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    cout << "今年幾歲？" << endl;
    int age;
    cin >> age;
    if (age >= 0 && age <= 20)
    {
        cout << "請輸入你的姓氏：" << endl;
    }
    if (age > 20 && age <= 30)
    {
        cout << "請輸入你的姓氏：" << endl;
    }
    if (age > 30 && age <= 40)
    {
        cout << "請輸入你的姓氏：" << endl;
    }
    if (age > 40 && age <= 50)
    {
        cout << "請輸入1~10的整數：" << endl;
    }
    if (age > 50 && age <= 60)
    {
        cout << "請輸入1~20的整數：" << endl;
    }
    if (age > 60 && age <= 70)
    {
        cout << "請輸入1~30的整數：" << endl;
    }
    if (age > 70 && age <= 80)
    {
        cout << "請輸入1~40的整數：" << endl;
    }
    if (age > 80 && age <= 90)
    {
        cout << "請輸入1~50的整數：" << endl;
    }
    if (age > 90 && age <= 100)
    {
        cout << "請輸入1~60的整數：" << endl;
    }
    if (age > 100 && age <= 110)
    {
        cout << "請輸入1~70的整數：" << endl;
    }
    if (age > 110 && age <= 120)
    {
        cout << "請輸入1~80的整數：" << endl;
    }
    if (age > 120)
    {
        cout << "請輸入1~90的整數：" << endl;
    }
}