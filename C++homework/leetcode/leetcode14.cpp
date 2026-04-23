#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longest(vector<string> &words)
{
    if (words.empty())
    {
        return "";
    }

    string ans = "";
    string first_word = words[0];

    for (int i = 0; i < first_word.size(); i++) // 字元
    {
        for (int j = 0; j < words.size(); j++) // 單字
        {
            auto now_word = words[j]; // 現在的單字
            // auto now_char = now_word[i]; // 現在的字元

            // 先判斷now_word size 比現在now_word[:i] size還要小 就可以不用比了
            if (now_word.size() < i + 1)
            {
                return ans;
            }

            if (now_word[i] != first_word[i])
            {
                return ans;
            }
        }
        ans += first_word[i];
    }

    return ans;
}

int main()
{
    vector<string> vec = {"flower", "flow", "flight"};
    cout << longest(vec) << endl;
}