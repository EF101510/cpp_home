#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> map{};
        unordered_set<int> set{};
        for (int num : arr)
        {
            if (map.find(num) == map.end())
            {
                map[num] = 1;
            }
            else
                map[num]++;
        }
        int time = 0;
        for (auto num : map)
        {
            set.insert(num.second);
            time++;
        }
        if (time == set.size())
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    vector<int> vec{1, 2, 2, 1, 1, 3};
    Solution sol;
    bool ans = sol.uniqueOccurrences(vec);
    cout << (ans ? "true" : "false") << endl;
}