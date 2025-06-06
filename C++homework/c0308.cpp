#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char** argv)
{
    char string[5];
    cout << "Enter a character: ";
    cin >> setw(5) >> string;
    cout << "You entered: " << string << endl;
    return 0;
}