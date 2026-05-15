#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
             
        int now_value = x;
        vector<int> vec;
        while (now_value > 0)
        {
            vec.push_back(now_value % 10);
            now_value = now_value / 10;
        }

        int left = 0;
        int right = vec.size() - 1;
        while (left < right)
        {
            if (vec[left] != vec[right])
            {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    bool result = sol.isPalindrome(121);
    cout << (result ? "true":"false") << endl;
    return 0;
}

