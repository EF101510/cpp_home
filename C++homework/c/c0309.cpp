#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    char string[100000];
    cout << "Please enter a string: ";
    cin.width(100000);
    cin >> string;
    cout << "The string you entered is: " << string << endl;
    return 0;
}