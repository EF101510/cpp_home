#include <iostream>
using namespace std;

int main()
{
    const int N = 4; // 節點數 A, B, C, D
    int adj[N][N];
    int degree[N] = {0}; // 紀錄各點度數
    int oddVertices[N];  // 儲存奇數度的點
    int oddCount = 0;    // 奇數度點的數量

    // 輸入 4x4 陣列
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> adj[i][j];
        }
    }

    // 計算每個點的度數
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            degree[i] += adj[i][j];
        }
    }

    // 找出奇數度的點
    for (int i = 0; i < N; i++)
    {
        if (degree[i] % 2 != 0)
        {
            oddVertices[oddCount++] = i;
        }
    }

    // 輸出奇數點資訊
    cout << "奇數的橋的數量：" << oddCount << endl;
    cout << "奇數的橋的編號：";
    for (int i = 0; i < oddCount; i++)
    {
        cout << oddVertices[i];
        if (i < oddCount - 1)
            cout << " ";
    }
    cout << endl;

    // 一筆畫判斷
    if (oddCount == 0)
    {
        cout << "可以一筆畫（回到原點）" << endl;
    }
    else if (oddCount == 2)
    {
        cout << "可以一筆畫（起點=" << oddVertices[0]
             << ", 終點=" << oddVertices[1] << "）" << endl;
    }
    else
    {
        cout << "不能一筆畫" << endl;
    }

    return 0;
}
