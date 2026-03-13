#include <iostream>
using namespace std;

int main()
{
    int n; //行
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"_";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}