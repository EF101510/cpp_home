#include<iostream>
using namespace std;
int main(int argc, char** argv) 
{
    int num;
    cout << "請不要輸入3的倍數，若是則結束" << endl;
    cin >> num;
    while (num % 3 != 0)
    {
        cout << "請不要輸入3的倍數，若是則結束" << endl;
        cin >> num;
    }
    cout << "結束" ;
    return 0;
}