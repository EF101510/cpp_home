#include <string>
#include <stack>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else if (c == ')' || c == ']' || c == '}')
            {
                if (st.empty())
                {
                    return false;
                }
                char st_top = st.top();

                if ((st_top == '(' && c != ')') ||
                    (st_top == '[' && c != ']') ||
                    (st_top == '{' && c != '}'))
                {
                    return false;
                }
                st.pop();
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution sol = Solution();

    bool is_valid = sol.isValid("()}");
    if (is_valid == 0)
    {
        cout << "false" << endl;
    }
    if (is_valid == 1)
    {
        cout << "true" << endl;
    }
}