#include <iostream>
using namespace std;

bool check_a(int up[7], int down[7])
{
    bool rule1 = up[1] != up[3] && up[1] == up[5];
    bool rule2 = down[1] != down[3] && down[1] == down[5];

    return rule1 && rule2;
}

bool check_b(int up[7], int down[7])
{
    bool rule1 = up[6] == 1;
    bool rule2 = down[6] == 0;

    return rule1 && rule2;
}

bool check_c(int up[7], int down[7])
{
    bool rule1 = up[1] != down[1] && up[3] != down[3] && up[5] != down[5];

    return rule1;
}



int main()
{
    // 幾首詩？
    int num;
    cin >> num;

    int poems[num * 2][7];

    // 輸入元素
    for (int i = 0; i < num * 2; i++)
    {
        cin >> poems[i][0] >> poems[i][1] >> poems[i][2] >> poems[i][3] >> poems[i][4] >> poems[i][5] >> poems[i][6];
    }

    // 判斷
    bool rule_a[num], rule_b[num], rule_c[num];
    for (int i = 0; i < num; i++)
    {
        rule_a[i] = check_a(poems[i * 2], poems[i * 2 + 1]);
        rule_b[i] = check_b(poems[i * 2], poems[i * 2 + 1]);
        rule_c[i] = check_c(poems[i * 2], poems[i * 2 + 1]);
    }
    for (int i = 0; i < num; i++)
    {
        if (rule_a[i] == false)
        {
            cout << "A";
        }
        if (rule_b[i] == false)
        {
            cout << "B";
        }
        if (rule_c[i] == false)
        {
            cout << "C";
        }
        if (rule_a[i] && rule_b[i] && rule_c[i] == true)
        {
            cout << "None";
        }
        cout << endl;
    }
}
