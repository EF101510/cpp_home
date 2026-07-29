#include <iostream>
using namespace std;

class Solution
{
public:
    int maxProduct(int n)
    {
        vector<int> vec;
        while (n > 0)
        {
            int remainder = n % 10;
            n /= 10;
            vec.push_back(remainder);
        }
        sort(vec.begin(), vec.end(), greater<int>());
        int ans = vec[0] * vec[1];
        return ans;
    }
};
int main()
{
    Solution sol;
    int ans = sol.maxProduct(6464);
    cout << ans << endl;
}