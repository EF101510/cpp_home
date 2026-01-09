#include <iostream>
#include <algorithm>
using namespace std;

double calcaulate_height(
    double water_volume,
    double h1, double h2,
    double area1, double area2)
{
    double cap1 = area1 * h1;
    if (water_volume <= cap1)
    {
        return water_volume / area1;
    }
    else
    {
        return ((water_volume - cap1) / area2) + h1;
    }
}

int main()
{
    // 輸入幾杯水
    int N;
    cin >> N;

    // 輸入長方體參數
    double w1, w2, h1, h2;
    cin >> w1 >> w2 >> h1 >> h2;

    // 輸入每杯水的容量
    double water[N];
    for (int i = 0; i < N; i++)
    {
        cin >> water[i];
    }

    double A1 = w1 * w1;
    double A2 = w2 * w2;

    double cap = A1 * h1 + A2 * h2;
    double cur_cap = 0;
    double max_delta = 0;
    for (int i = 0; i < N; i++)
    {
        double water_volume = water[i];
        double before_cap = min(cur_cap, cap);
        double after_cap = min(cur_cap + water_volume, cap);

        double berfor_h = calcaulate_height(before_cap, h1, h2, A1, A2);
        double after_h = calcaulate_height(after_cap, h1, h2, A1, A2);

        // 計算delta是否要更換，如果delta > max_delta 則max_delta更新
        double delta = after_h - berfor_h;

        if (delta > max_delta)
        {
            max_delta = delta;
        }

        cur_cap = after_cap;
    }

    cout << max_delta << endl;
}