#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.1415926535798;
int main(int argc, char **argv)
{
    cout << PI << endl;
    cout << setprecision(13) << PI << endl;
    cout << setprecision(11) << PI << endl;
    cout << setprecision(5) << PI << endl;
}