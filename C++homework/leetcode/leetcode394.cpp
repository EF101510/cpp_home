#include <iostream>
#include <string>
#include <stack>
using namespace std;

// 23[a]

string solution(string s)
{
    stack<int> numSt;
    stack<string> strSt;
    string cur = "";
    int num = 0;

    for (char c : 
        s)
    {
        if (isdigit(c)) 
            num = num * 10 + c - '0';

        else if (c == '[') 
        {
            numSt.push(num);
            strSt.push(cur);
            cur = "";
            num = 0;
        }
        else if (c == ']') 
        {
            string tmp = "";
            int k = numSt.top();
            for (int i = 0; i < k; i++) 
            {
                tmp += cur;
            }

            cur =  strSt.top()+ tmp; 
            strSt.pop();
            numSt.pop();
        }
        else 
            cur += c;
    }
    return cur;
}

int main()
{
    cout << solution("2[abc]3[cd]ef") << endl;
    return 0;
}