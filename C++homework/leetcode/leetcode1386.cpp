#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    int maxNumberOfFamilies(int n, vector<vector<int>> &reservedSeats)
    {
        const unsigned short CASE1 = 0b0111100000;
        const unsigned short CASE2 = 0b0001111000;
        const unsigned short CASE3 = 0b0000011110;

        unordered_map<int, int> map;
        for (auto seat : reservedSeats)
        {
            map[seat[0]] |= 1 << (10 - seat[1]);
        }

        int total = (n - map.size()) * 2;

        for (auto r : map)
        {
            if (r.second == 513) // 0b1000000001 = 513
            {
                total += 2;
            }
            else if ((r.second & CASE1) == 0 && (r.second & CASE3) == 0)
            {
                total += 2;
            }
            else if ((r.second & CASE1) == 0 || (r.second & CASE2) == 0 || (r.second & CASE3) == 0)
            {
                total += 1;
            }
        }
        return total;
    }
};

int main()
{
    vector<vector<int>> vec = {{2, 1}, {1, 8}, {2, 6}} ;//, {2, 6}, {3, 1}};
    Solution sol;
    int ans = sol.maxNumberOfFamilies(2, vec);
    cout << ans << endl;
}