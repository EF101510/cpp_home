#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<int> left;
    stack<int> star;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            left.push(i);
        }
        else if (s[i] == '*')
        {
            star.push(i);
        }
        else
        {
            if (!left.empty())
            {
                left.pop();
            }
            else if (!star.empty())
            {
                star.pop();
            }
            else
            {
                return false;
            }
        }
    }

    while (!left.empty() && !star.empty())
    {
        int left_top = left.top();
        int star_top = star.top();
        if (left_top < star_top)
        {
            left.pop();
            star.pop();
        }
        else
        {
            return false;
        }
    }
    if (!left.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    bool result = solution("(**()");
    if (result == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
