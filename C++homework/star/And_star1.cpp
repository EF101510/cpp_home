#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i % 2 == 0)
            {
                cout << "*";
            }
            else // 1
            {
                cout << "&";
            }
        }
        cout << endl;
    }
}