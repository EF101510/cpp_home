#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        
        int x_closest = max(x1,min(xCenter, x2));
        int y_closest = max(y1, min(yCenter, y2));

        int dx = x_closest - xCenter;
        int dy = y_closest - yCenter;
        
        return (dx * dx + dy * dy) <= (radius * radius);
    }
};