#include <iostream>
#include "c0616.hpp" 
using namespace std;

int x;
int num; 
double f;
double c;
int main(int argc, char** argv)
{
    cout << "請輸入1或2(1=攝氏轉華氏，2＝華氏轉攝氏)" << endl;
    cin  >> x;
    if (x == 1)
    {
        cout << "攝轉華，請輸入一個數字" << endl;
        cin >> num;
        f = c_to_f(num);
        cout << "華氏溫度為：" << f << endl;
    }
    else
    if (x == 2)
    {
        cout << "華轉攝，請輸入一個數字" << endl;
        cin >> num;
        c = f_to_c(num);
        cout << "攝氏溫度為：" << c << endl;
    }
    else
    {
        cout << "輸入錯誤，請輸入1或2" << endl;
    }
    return 0;
        
    
}