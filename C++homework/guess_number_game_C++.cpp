#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(int argc, char** argv)
{
    int guess;
    int guess_time = 1;
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
    return 0;
}


// 我的版本
// 設計思路:
// 使用rand()生成一個1到10之間的隨機數字
// 使用迴圈既屬玩家目前的猜測次數，最多三次，如果大於3次還沒有猜對，則輸出lose
// 如果猜對了，則輸出win
int guess_num(int argc, char** argv) {
    int guess; // 用來保存玩家的猜測數字
    int guess_time = 3; // 玩家最多猜測的次數

    srand(time(NULL)); // 使用時間來設置隨一個機數種子
    int num = 1 + rand() % 10; // 生成1到10之間的隨機數字

    cout << "現在是猜數字遊戲，請輸入一個數字" << endl;
    cin >> guess; // 玩家輸入猜測的數字

    for (int i = 0; i < guess_time; i++) {
        if (guess == num) {
            cout << "恭喜！！你猜對了" << endl; // 猜對了
            return 0;
        } else {
            cout << "輸入錯誤，請重新輸入" << endl;
            cout << "你的數字比" << (guess < num ? "正確答案小" : "正確答案大") << endl; // guess < num ? "正確答案小" : "正確答案大" 是“三元表達式的一種寫法” , 意思為如果 guess 小於 num，則輸出 "正確答案小"，否則輸出 "正確答案大"
            cout << "你還有 " << (guess_time - i - 1) << " 次機會" << endl; // 顯示剩餘的猜測次數
            if (i < guess_time - 1) { // 如果還有剩餘的猜測次數
                cout << "請再次輸入你的猜測：" << endl;
                cin >> guess; // 讓玩家再次輸入猜測的數字
            }
        }
    }

    // 如果猜測次數用完了，則輸出lose
    cout << "你已經用完所有的猜測次數，正確答案是：" << num << endl;
    return 0; // 程式結束
}




