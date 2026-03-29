#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 4;
    int num = 0;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    // Input
    for (int i = 0; i < n; i++)
    {

            if (i% 2 == 0)// 偶
            {
                for (int j = 0; j < n; j++)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
            if (i% 2 == 1)// 奇
            {
                for (int j = n-1; j >= 0; j--)
                {
                    arr[i][j] = num;
                    num++;
                }
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