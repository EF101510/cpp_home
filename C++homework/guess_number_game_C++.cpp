#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(int argc, char** argv)
{
    int guess;
    int guess_time;
    srand(time(NULL));
    int num = 1 + rand() % (10);
    cout << "現在是猜數字遊戲，請輸入一個數字" << endl;
    cin >> guess;
    if (guess==num)
    {
        cout << "win" << endl;
    }
    else
    {
        cout << "輸入錯誤，請重新輸入" << endl;
        cout << "你的數字比" << (guess < num ? "正確答案小" : "正確答案大") << endl;
        cout << "你還有 " << (3 - guess_time) << " 次機會" << endl;
        guess_time = 1;
        while (guess != num && guess_time < 3)
        {
            cin >> guess;
            if (guess == num)
            {
                cout << "win" << endl;
            }
            else
            {
                cout << "輸入錯誤，請重新輸入" << endl;
                cout << "你的數字比" << (guess < num ? "正確答案小" : "正確答案大") << endl;
                cout << "你還有 " << (3 - guess_time) << " 次機會" << endl;
                guess_time++;
            }
        }
        if (guess_time == 3)
        {
            cout << "lose" << endl;
            cout << "正確答案是：" << num << endl;
        }
    }
}