#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Define the 7x6 matrix for letter B
    char letterB[7][6] = {
        {'*', '*', '*', '*', '*', ' '},
        {'*', ' ', ' ', ' ', '*', ' '},
        {'*', ' ', ' ', ' ', '*', ' '},
        {'*', '*', '*', '*', '*', ' '},
        {'*', ' ', ' ', ' ', '*', ' '},
        {'*', ' ', ' ', ' ', '*', ' '},
        {'*', '*', '*', '*', '*', ' '}
    };

    // Print the matrix
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 6; j++) {
            cout << letterB[i][j];
        }
        cout << endl;
    }

    system("pause");    
    
    return 0;
}