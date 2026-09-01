#include <iostream>
using namespace std;
const double PI = 3.1415926535798;
int main(int argc, char **argv)
{
    cout.precision(2);
    cout.setf(ios::fixed);
    cout.width(10);
    cout << PI * -1 << endl;
    cout.width(10);
    cout << PI * 100 << endl;
    cout.width(10);
    cout << PI * 10000 << endl;
    return 0;
}

//      -3.14
//      314.16
//      31415.93