#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> stack{}; // ([
        for (char a : s)
        {
            if (a == '(' || a == '[' || a == '{')
            {
                stack.push_back(a);
                continue;
            }
            if (stack.empty())
            {
                return false;
            }
            char sttop = stack[stack.size() - 1];
            if ((sttop == '(' && a == ')') || (sttop == '[' && a == ']') || (sttop == '{' && a == '}'))
            {
                stack.pop_back();
            }
            else
                return false;
        }

        return stack.empty();
    }
};
//       ([])
int main()
{
    string s = ")";
    Solution sol;
    bool ans = sol.isValid(s);
    cout << ans << endl;
}