#include <iostream>
using namespace std;

class Point
{
    double x;
    double y;

public:
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    ~Point() {}

    void print() const
    {
        cout << this->x << " " << this->y << endl;
    }

    Point &set_x(double new_x)
    {
        this->x = new_x;
        return *this;
    }

    Point &set_y(double new_y)
    {
        this->y = new_y;
        return *this;
    }

    Point operator+(const Point &other) const
    {
        double new_x = this->x + other.x;
        double new_y = this->y + other.y;
        return Point(new_x, new_y);
    }

    Point operator-(const Point &other) const
    {
        double new_x = this->x - other.x;
        double new_y = this->y - other.y;
        return Point(new_x, new_y);
    }

    bool operator==(const Point &other) const
    {
        return this->x == other.x && this->y == other.y;
    }
    bool operator!=(const Point &other) const
    {
        // return !(this->x == other.x && this->y == other.y);
        return (this->x != other.x) || (this->y != other.y);
    }
};

int main()
{
    // 保存到 stack
    Point p1 = Point(3, 5);

    // 保存到 heap
    Point *p2 = new Point(4.2, 6);

    p1.print();
    p2->print(); // 等效：(*p2).print();

    p1.set_x(9).set_y(9).print();
    p2->set_x(9).set_y(9).print();

    Point p3 = p1 + *p2;
    p3.print();

    Point p4 = p1 - *p2;
    p4.print();

    cout << boolalpha; // 讓 true/false 顯示為文字
    cout << "p1 == p2? " << (p1 == *p2) << endl;
    cout << "p1 != p2? " << (p1 != *p2) << endl;

    delete p2;
}
