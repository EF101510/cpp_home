#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int scoreOfParentheses(string s)
    {
        // int num = 0;
        int big = 0;
        for (char a : s)
        {
            if (a == '(')
            {
                big++;
            }

            // big = max(num,big);
        }
        return big;
    }
};

int main()
{
    string s = "(())";
    Solution sol;
    int ans = sol.scoreOfParentheses(s);
    cout<<ans<<endl;
}