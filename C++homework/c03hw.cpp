#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv)
{
    double radius;
    cout << "�п�J��b�|: " << endl;
    cin >> radius;
    double circumference =  M_PI * radius * 2;
    cout << "��P���O: " << circumference << endl;
    double area = M_PI * radius * radius;
    cout << "�ꭱ�n�O: " << area << endl;
}