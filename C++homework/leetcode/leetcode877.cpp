#include <iostream>
using namespace std;

class Solution
{
public:
    bool stoneGame(vector<int> &piles)
    {
        int dpsize = piles.size();
        int dp[dpsize][dpsize];

        for (int i = dpsize - 1; i >= 0; i--)
        {
            for (int j = i; j < dpsize; j++)
            {
                if (i == j)
                {
                    dp[i][j] = piles[i];
                    continue;
                }
                int left = piles[i] - dp[i + 1][j];
                int right = piles[j] - dp[i][j - 1];

                dp[i][j] = max(left, right);
            }
        }
        return dp[0][dpsize - 1] > 0;
    }
};

int main()
{
    vector<int> vec = {1, 9, 1};
    Solution sol;
    bool ans = sol.stoneGame(vec);
    string s = ans == 1 ? "true" : "fulse";
    cout << s << endl;
}