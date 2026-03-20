#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num>=10)
            {
                num=0;
            }
            
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    
}