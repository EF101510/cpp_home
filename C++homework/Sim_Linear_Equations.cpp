#include <iostream>
#include "utils.hpp"
using namespace std;

int main(int argc, char **argv)
{
    // 使用者輸入兩個方程式的係數
    double arr[2][3];
    double x = 0;
    double y = 0;

    int time = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "請輸入第" << i + 1 << "個式子的第" << j + 1 << "的數字" << endl;

            while (!(cin >> arr[i][j]) || time < 3)
            {
                time++;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            if (time >= 3)
            {
                sorry();
                return 0;
            }
        }
    }
    double a = arr[0][0];
    double b = arr[0][1];
    double e = arr[0][2];
    double c = arr[1][0];
    double d = arr[1][1];
    double f = arr[1][2];

    cout << "這是一個二元一次方程式" << endl;
    cout << "請輸入第一個方程式的係數 a, b, c (格式:a b c): " << endl;
    cin >> a >> b >> e;

    if (cin.fail())
    {
        sorry();
    }

    cout << "請輸入第二個方程式的係數 e, f, g (格式:e f g): " << endl;
    cin >> c >> d >> f;
    if (a * d - b * c != 0)
    {
        y = ((a * f) - (e * c)) / ((a * d) - (b * c));
        x = ((b * f) - (e * d)) / ((a * d) - (b * c));
    }
    else
    {
        sorry();
        return 0;
    }
    cout << "x=" << x << " " << "y=" << y << endl;
    thankyou();
}
