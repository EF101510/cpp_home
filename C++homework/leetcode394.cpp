#include <iostream>
#include <string>
#include <stack>
using namespace std;

// 23[a]

string solution(string s)
{
//num：現在讀到倍?
//cur：現在做好字串
//numSt：以前倍數
//strSt：以前字串
//tmp：複製機
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
    // 預期輸出: accaccacc
    // 實際輸出會因為錯誤而大混亂
    cout << solution("2[abc]3[cd]ef") << endl;
    return 0;
}