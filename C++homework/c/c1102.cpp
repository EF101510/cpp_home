#include <iostream>
using namespace std;

class Employee
{
    int e_id;
    string e_name;

public:
    Employee(int id, string name)
    {
        e_id = id;
        e_name = name;
    }
    int get_id()
    {
        return e_id;
    }
    string get_name()
    {
        return e_name;
    }

    int set_id(int id)
    {
        e_id = id;
    }
    int set_name(string name)
    {
        e_name = name;
    }
    ~Employee() {}
};

int main()
{

    Employee *em = new Employee(1, "aaa");
    int id = em->get_id();
    string name = em->get_name();

    int x;
    cin >> x;

    em->set_id(x);
}
