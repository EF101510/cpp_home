#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, char **argv)
{
    srand(time(NULL));
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}