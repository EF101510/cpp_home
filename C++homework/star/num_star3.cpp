#include <iostream>

using namespace std;
int main()
{
    int n;
    int line = 0;
    int num = 0;

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (line % 2 == 0)
            {
                cout << num% 10;
                num+=1;
            }
            if (line % 2 == 1)
            {
                cout << num% 10;
                num-=1;
            }
                
        }
        line++;
        cout<<endl;
        if (line% 2 == 1)
        {
            num=num+n-1;
        } else {
            num=num+n+1;
        }  
    }
}