#include<iostream>
using namespace std;

void check_triangle_type(int,int,int);
void not_a_triangle();
void obtuse_triangle();
void right();
void acute();


int main(int argc,char** argv)
{
    int a , b , c;
    int x ; //暫存
    cout << "請輸入三個數字(單位：cm)：" << endl;
    cin >> a >> b >> c ;
    if (a > b)
    {
       x = a;
       a = b;
       b = x; 
    }

    if (a > c)
    {
        x = a;
        a = c;
        c = x; 
    }
    
    if (b > c)
    {
        x = b;
        b = c;
        c = x;
    }

    cout << a << " " << b << " " << c <<endl;
    if (a + b > c)
    {
        check_triangle_type(a, b, c);
    }
    else
        not_a_triangle();
}

void check_triangle_type(int a,int b,int c)
{
    if (a * a + b * b < c * c)
    {
        obtuse_triangle();
    }

    if (a * a + b * b == c * c)
    {
        right();
    }

    if (a * a + b * b > c * c)
    {
        acute();
    }
}

void not_a_triangle()

{
    cout << "no" << endl;
}

void obtuse_triangle()
{
    cout << "Obtuse" << endl;
}

void right()
{
    cout << "right" << endl;
}

void acute()
{
    cout << "acute" << endl;
}