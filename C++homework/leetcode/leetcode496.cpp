#include <vector>
#include <map>
#include <stack>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        stack<int> st;
        unordered_map<int, int> map;
        for (int x : nums2)
        {
            while (!st.empty() && x < st.top())
            {
                map[st.top()] = x;
                st.pop();
            }
            st.push(x);
        }
        vector<int> ans;
        for (int x : nums1)
        {
            auto it = map.find(x);
            if (it == map.end()) { // can not find the element in the map
                ans.push_back(-1);
            } else {
                ans.push_back(it->second);
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> num1 = {1,8,4,6};
    vector<int> num2 = {1,6,5,8,4};
    Solution sol;
    auto result = sol.nextGreaterElement(num1,num2);
    for (int x: result) {
        cout << x << " ";
    }
}