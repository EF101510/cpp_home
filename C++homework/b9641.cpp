#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int stu = 0;
    cin >> stu;

    double stu_sc[stu];
    int low = -1;
    int pass = -1;

    for (int i = 0; i < stu; i++)
    {
        cin >> stu_sc[i];
    }

    sort(stu_sc, stu_sc + stu);
    for (int i = 0; i < stu; i++)
    {
        cout << stu_sc[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < stu; i++)
    {
        if (stu_sc[i] < 60)
        {
            low = stu_sc[i];
        }
        else
        {
            pass = stu_sc[i];
            break;
        }
    }

    if (low == -1)
    {
        cout << "best case" << endl;
    }
    else if (pass == -1)
    {
        cout << "worst case" << endl;
    }
    else
    {
        cout << low << " " << pass << endl;
    }
    
}