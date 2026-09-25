#include <cmath>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isThree(int n)
    {
        if (n == 1)
        {
            return false;
        }
        double sq = sqrt(n);
        if (is_int(sq))
        {
            int count = 0;
            // double sqr = sqrt(sq);
            for (int i = 1; i < sq + 1; i++)
            {
                if ((int)sq % i == 0)
                {
                    count++;
                }
            }
            if (count > 2)
                return false;
            else
                return true;
        }
        else
            return false;
    }

    bool is_int(double x)
    {
        return x == (int)x;
    }
};

int main()
{
    Solution sol;
    bool ans = sol.isThree(81);
    cout << ans << endl;
}