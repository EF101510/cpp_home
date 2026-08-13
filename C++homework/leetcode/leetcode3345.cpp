#include <iostream>
using namespace std;

class Solution
{
public:
    int smallestNumber(int n, int t)
    {

        while (true)
        {
            int a = n;
            int prodact = 1;
            while (a > 1)
            {
                prodact *= a % 10;
                a /= 10;
            }
            if (prodact % t == 0)
            {
                return n;
            }
            else
                n++;
        }
    }
};

int main()
{
    Solution sol;
    int ans = sol.smallestNumber(15, 3);
    cout << ans << endl;
}