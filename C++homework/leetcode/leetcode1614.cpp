#include <iostream>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int big = 0;
        int many = 0;
        for (char a : s)
        {
            if (a == '(')
            {
                many++;
            }
            else if (a == ')')
            {
                many--;
            }
            else
                continue;

            big = max(big, many);
        }
        return big;
    }
};

int main()
{
    string s = "(1+(2*3)+((8)/4))+1";
    Solution sol;
    int ans = sol.maxDepth(s);
    cout << ans << endl;
}