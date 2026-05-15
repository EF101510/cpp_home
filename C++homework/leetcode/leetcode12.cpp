#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
private:
    // 對照表:7 個基本數值 + 6 個特殊組合,共 13 個
    // ⚠️順序是「由大到小, 因為for迴圈會從第一個開始迭代
    const vector<pair<int, string>> value = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}};

public:
    string intToRoman(int num)
    {
        string result = "";

        // 一個一個拿出對照表的「(數值, 字串)」
        for (auto &p : value)
        {
            int v = p.first;            // 數值,例如 1000
            const string &s = p.second; // 字串,例如 "M"

            // TODO 1:當 num 還夠減 v 的時候,要一直做下面兩件事
            //   (a) 把 s 接到 result 後面
            //   (b) num 扣掉 v
            //
            // 提示:用 while 迴圈,不是 if !
            //       因為像 num = 3000,要連續寫三個 "M"
            while (num != 0 && v <= num)
            {
                num -= v;
                result += s;
            }
        }

        return result;
    }
};

int main()
{

    Solution sol;
    string ans = sol.intToRoman(2345);
    cout<<ans<<endl;
}
