#include <iostream>
#include <string>
#include <iomanip>
#include <thread> // 線程相關的函式庫
#include <chrono> //時間相關函式庫
#include "utils.hpp"

using namespace std;

struct Time
{
    int day;
    int hour;
    int minute;
    int second;
    Time(int d, int h, int m, int s) : day(d), hour(h), minute(m), second(s) {}
};
void timer(Time &t)
{
    while (true)
    {
        t.second++;
        if (t.second >= 60)
        {
            t.second = 0;
            t.minute++;
        }
        if (t.minute >= 60)
        {
            t.minute = 0;
            t.hour++;
        }
        if (t.hour >= 24)
        {
            t.hour = 0;
            t.day++;
        }
        cout << "\r天數:" << t.day
             << " 時數:" << setw(2) << setfill('0') << t.hour
             << " 分鐘:" << setw(2) << setfill('0') << t.minute
             << " 秒數:" << setw(2) << setfill('0') << t.second
             << flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
}
int main()
{
    Time tm = Time(0, 23, 59, 57);
    timer(tm);
}