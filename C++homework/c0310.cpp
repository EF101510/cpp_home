#include<iostream>
using namespace std;

int main (int argc, char** argv)
{
    int num;
    char key;
    cout << "請輸入一個整數";
    cin >> num;
    cout << "請按下Enter鍵結束" << endl;
    cin.get(key);
    cout << "謝謝你的輸入" << endl;
    cout << "你輸入的整數是: " << num << endl;
    return 0;
}