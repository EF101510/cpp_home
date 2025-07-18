#include <iostream>
using namespace std;

// 函數宣告
int square(int);
void swap(int& ,int&);

int a = 0;


int main(int argc, char** argv) 
{
    // extern int a;
    int cin_square = 2;
    int cin_swap = 5;
    int cin_swap2 = 3;
    auto x = 0.0;

    int cout_square = square(cin_square);
    cout << cout_square << endl;

    cout << "交換前：cin_swap:" << cin_swap << "cin_swap2:" << cin_swap2 <<endl;
    swap(cin_swap,cin_swap2);
    cout << "交換後：cin_swap:" << cin_swap << "cin_swap2:" << cin_swap2 <<endl;
    a = 6;


    return 0;
}

int square(int x = 5)
{
    return x*x;
}

void swap (int& y ,int& z)
{
    int temp;
    temp = y;
    y = z;
    z = temp;
}

