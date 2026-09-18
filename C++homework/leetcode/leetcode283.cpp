#include <iostream>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[k] = nums[i];
                nums[i] = 0;
                k++;
            }
        }
        for (int i = k; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
        
    }
};

int main()
{
    vector<int> vec{0, 1, 0, 3, 12};
    Solution sol;
    sol.moveZeroes(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]<<",";
    }
    cout << endl;
}