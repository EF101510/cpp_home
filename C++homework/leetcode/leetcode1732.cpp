#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int result = 0;
        vector<int> vec(gain.size(), 0);
        vec[0] = 0 + gain[0];
        for (int i = 1; i < gain.size(); i++)
        {
            vec[i] = gain[i] + vec[i - 1];
        }
        sort(vec.begin(), vec.end());
        result = vec[vec.size()-1];
        if (result < 0)
        {
            return 0;
        }
        
        return result;
    }
};

int main()
{                 //{-5, }
    vector<int> v = {-4,-3,-2,-1,4,3,2};
    Solution sol;
    int ans = sol.largestAltitude(v);
    cout << ans << endl;
}