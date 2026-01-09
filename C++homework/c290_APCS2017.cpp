#include <iostream>
using namespace std;

int main()
{
    long long sun = 0;
    cin >> sun;
    int A = 0;
    int B = 0;
    int count = 0;
    while (sun > 0)
    {
        count++;
        int temp = sun % 10;
        if (count % 2 == 0)
        {
            A += temp;
        }
        else
        {
            B += temp;
        }
        sun = sun / 10;
    }

    int result = abs(A - B);
    cout << result << endl;
}