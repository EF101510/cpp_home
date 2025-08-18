#include <iostream>
using namespace std;

// 標頭 (會使用到的程式宣告區)
void check_leap_year();
void convert_year();

int main(int argc, char **argv)
{
    int selection; // 選擇
    cout << "輸入1=判斷是否為閏年，輸入2=轉換中華民國年" << endl;
    cin >> selection;
    if (selection == 1)
    {
        check_leap_year();
    }
    else if (selection == 2)
    {
        convert_year();
    }
}

// 判斷這是否為閏年
void check_leap_year()
{
    int num;
    cout << "請輸入一個西元年，0代表結束(請輸入正常的數字)" << endl;
    while (num != 0)
    {
        cin >> num;
        if ((num % 400 == 0) || (num % 4 == 0 && num % 100 != 0))
        {
            cout << "這是個閏年" << endl;
        }
        else
        {
            cout << "這不是個閏年" << endl;
        }
    }
    cout << "程式執行結束" << endl;
}

// 民國年轉換成西元年
void convert_year()
{
    int year;
    int year_sun;
    cout << "請輸入一個中華民國年，0代表結束(請輸入正常的數字)" << endl;
    while (year != 0)
    {
        cin >> year;
        year_sun = year + 1911;
        cout << "西元年是：" << year_sun << endl;
    }
    cout << "程式執行結束" << endl;
}
