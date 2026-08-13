#include <iostream>
using namespace std;

class Solution
{
public:
    string winningPlayer(int x, int y)
    {
        int i = 2;
        while (true)
        {

            if (i % 2 == 0)
            {
                if (x >= 1 && y >= 4)
                {
                    x -= 1;
                    y -= 4;
                    i++;
                }
                else
                    return "Bob";
            }
            else
            {
                if (x >= 1 && y >= 4)
                {
                    x -= 1;
                    y -= 4;
                    i++;
                }
                else
                    return "Alice";
            }
        }
    }
};

int main()
{
    Solution sol;
    string ans = sol.winningPlayer(4, 11);
    cout << ans << endl;
}
