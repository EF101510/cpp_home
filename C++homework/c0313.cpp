#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a;
    int b;
    char key;
    cout << "加法運算 按Enter鍵繼續";
    cin.get(key);
    cout << "請輸入A值" << endl;
    cin >> a;
    cout << "請輸入B值" << endl;
    cin >> b;
    cout << a+b;
}