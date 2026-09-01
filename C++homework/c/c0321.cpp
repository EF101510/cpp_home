#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char **argv)
{
    unsigned int seed = time(NULL);
    srand(seed);
    cout << 1 + rand() % (100 - 1 + 1) << endl;
    cout << 1 + rand() % (100 - 1 + 1) << endl;
}
