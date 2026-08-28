#include <iostream>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        int plus = 0;
        int multipier = 0;

        vector<int> vec = {};
        while (n>0)
        {
            vec.push_back(n%10);
            n /= 10;
        }
        
        
    }
};