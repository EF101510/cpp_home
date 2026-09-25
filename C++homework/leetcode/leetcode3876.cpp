#include <iostream>
using namespace std;

class Solution
{
public:
    bool uniformArray(vector<int> &nums1)
    {
        int s = nums1[0];
        for (int i = 0; i < nums1.size(); i++)
        {
            if (s > nums1[i])
            {
                s = nums1[i];
            }
        }

        if (s % 2 == 0)
        {
            for (int num : nums1)
            {
                if (num % 2 == 1)
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    vector<int> vec{2, 3, 4};
    Solution sol;
    bool ans = sol.uniformArray(vec);
    string str = ans ? "true" : "false";
    cout << str << endl;
}