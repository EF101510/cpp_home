#include <iostream>

using namespace std;
int main()
{
    int n =5;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<"_";
        }
        for (int k = 0; k < i*2+1; k++)
        {
              cout<<"*";
        }
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<"_";
        }       
        cout<<endl;
    }
    
}