#include <iostream>
using namespace std;

class Solution
{
public:
    int minimumPushes(string word)
    {
        int size = word.size();
        int rem = size % 8;
        int div = size / 8;
        int ans = 0;
        if (size <= 8)
        {
            return size;
        }

        for (int i = 1; i <= div; i++)
        {
            ans += i * 8;
        }
        ans += div + 1 * rem;

        return ans;
    }
};

int main()
{
    Solution sol;
    int a = sol.minimumPushes("ngnlllgv");
    cout << a << endl;
}