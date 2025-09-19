#include <iostream>
using namespace std;

struct Cube
{
    double length; // 長
    double width;  // 寬
    double height; // 高
};

double volume(const Cube &hi)
{
    return hi.length * hi.width * hi.height;
}

double surface_area(const Cube &hi)
{
    return 2 * (hi.length * hi.width + hi.length * hi.height + hi.width * hi.height);
}

int compare(const Cube &a, const Cube &b)
{
    double hectorliu = volume(a);
    double hector = volume(b);

    if (hectorliu > hector)
        return 1;
    else if (hectorliu < hector)
        return -1;
    else
        return 0;
}

int main()
{
    Cube c1{2, 3, 4};
    Cube c2{3, 3, 3};

    cout << "c1 體積: " << volume(c1) << endl;
    cout << "c1 表面積: " << surface_area(c1) << endl;

    cout << "c2 體積: " << volume(c2) << endl;
    cout << "c2 表面積: " << surface_area(c2) << endl;

    int result = compare(c1, c2);
    if (result == 1)
        cout << "c1 比較大" << endl;
    else if (result == -1)
        cout << "c2 比較大" << endl;
    else
        cout << "兩個一樣大" << endl;

    return 0;
}
