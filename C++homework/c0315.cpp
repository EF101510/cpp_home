#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    short n1 = 32767;
    int n = int(n1++);
    cout << n << endl;
    cout << n1 << endl;
    return 0;
}