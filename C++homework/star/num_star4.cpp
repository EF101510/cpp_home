#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin>>n;

    int num = 0;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num++;
            if (num >= 10)
            {
                num = 0;
            }

            arr[j][i] = num;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}