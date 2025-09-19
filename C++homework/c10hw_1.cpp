#include <iostream>
#include <string>
#include "utils.hpp"
using namespace std;

struct Rectangle
{
    double width;
    double height;

    // Rectangle(int w, int h) : width(w), height(h) {}
    Rectangle(double w, double h)
    {
        width = w;
        height = h;
    }

    ~Rectangle()
    {
    }

    double perimeter() // method
    {
        return 2 * (width + height);
    }
};

double perimeter(const Rectangle &rect) // function
{
    double per = 2 * (rect.width + rect.height);
    return per;
}

double area(const Rectangle &rect)
{
    double a = rect.width * rect.height;
    return a;
}

int main(int argc, char **argv)
{
    double w, h;
    cout << "請輸入正方形的長寬：" << endl;
    cin >> w >> h;

    // 創建Rectangle 在stack上,當結束這個function會自動清除
    Rectangle rect(w, h);
    cout << "周長=" << perimeter(rect) << endl;
    cout << "面積=" << area(rect) << endl;

    // 創建Rectangle在heap上,需要人工管理
    Rectangle *r2 = new Rectangle(w, h);
    cout << "周長=" << perimeter(*r2) << endl;
    cout << "面積=" << area(*r2) << endl;

    double r2_perimeter = r2->perimeter();
    delete r2; // 手動釋放。避免memery leak
}