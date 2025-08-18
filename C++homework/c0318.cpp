#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, char **argv)
{
    unsigned seed;
    cout << "Enter a seed value: ";
    cin >> seed;
    srand(seed);
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}
