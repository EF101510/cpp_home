#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int big = 0;
        vector<int> out {};
        for (int i = heights.size() - 1; i >= 0; i--)
        {
            if (big<heights[i])
            {
                big = heights[i];
                out.push_back(i);
            }
        }
        reverse(out.begin(),out.end());
        return out;
    }
};

int main()
{
    vector<int> vec {4,2,3,1};
    Solution sol;
    vector<int> ans  = sol.findBuildings(vec);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
    
}