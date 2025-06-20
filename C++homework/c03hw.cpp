#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv)
{
    double radius;
    cout << "請輸入圓半徑: " << endl;
    cin >> radius;
    double circumference =  M_PI * radius * 2;
    cout << "圓周長是: " << circumference << endl;
    double area = M_PI * radius * radius;
    cout << "圓面積是: " << area << endl;
}