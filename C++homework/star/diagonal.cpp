#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int num{0};
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, 0));

    // input
    for (int i = 0; i < n; i++)
    {
        num++;
        arr[i][i] = num;
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